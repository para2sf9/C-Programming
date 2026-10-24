#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 256

static double *A, *B, *C;

static inline double mget(const double *m, int i, int j) { return m[i * N + j]; }
static inline void mset(double *m, int i, int j, double v) { m[i * N + j] = v; }

static void naive(void) {
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j) {
            double s = 0;
            for (int k = 0; k < N; ++k)
                s += mget(A, i, k) * mget(B, k, j);
            mset(C, i, j, s);
        }
}

static void blocked(void) {
    for (int i = 0; i < N; ++i)
        for (int k = 0; k < N; ++k) {
            double a = mget(A, i, k);
            for (int j = 0; j < N; ++j)
                mset(C, i, j, mget(C, i, j) + a * mget(B, k, j));
        }
}

int main(void) {
    A = calloc(N * N, sizeof(double));
    B = calloc(N * N, sizeof(double));
    C = calloc(N * N, sizeof(double));
    if (!A || !B || !C) return 1;
    for (int i = 0; i < N * N; ++i) { A[i] = 1.0; B[i] = 2.0; }

    clock_t t1 = clock();
    naive();
    clock_t t2 = clock();
    double s1 = (double)(t2 - t1) / CLOCKS_PER_SEC;

    for (int i = 0; i < N * N; ++i) C[i] = 0.0;

    t1 = clock();
    blocked();
    t2 = clock();
    double s2 = (double)(t2 - t1) / CLOCKS_PER_SEC;

    double sum = 0;
    for (int i = 0; i < N * N; ++i) sum += C[i];
    printf("naive=%.3fs blocked=%.3fs sum=%.1f\n", s1, s2, sum);
    free(A); free(B); free(C);
    return 0;
}
