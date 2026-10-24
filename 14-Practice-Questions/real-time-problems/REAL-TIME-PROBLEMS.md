# Real-Time Problem Solving — 29 C Scenarios

Business and systems-flavoured exercises: billing, payroll, shipping, sensors, networking, rate limiting, buffers, and resource handling. Each one is small enough to finish in one sitting but exercises a realistic rule set: tiered pricing, rounding, boundary checks, and validation.

## How to practice
Try solving each prompt first, without opening the solution. Use the fixed sample dimensions to verify formatting; then replace constants with validated user input. Compile with `gcc -std=c11 -Wall -Wextra -Wpedantic`.

---

## 1. Electricity bill estimator

**Problem.** Apply three progressive usage tiers to 250 kWh: first 100 at 5 cents, next 100 at 8 cents, remainder at 12 cents; add a fixed service charge of 2.50.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/real-time-problems_01.c`

```c
#include <stdio.h>
int main(void){double kwh=250, bill=2.50;double a=kwh<100?kwh:100;bill+=a*0.05;kwh-=a;double b=kwh<100?kwh:100;bill+=b*0.08;kwh-=b;if(kwh>0)bill+=kwh*0.12;printf("Estimated bill: $%.2f\n",bill);return 0;}
```

**Output**

```text
Estimated bill: $21.50
```

---

## 2. Parking fee calculator

**Problem.** Charge 3.00 for the first hour and 1.50 for each additional started hour, capped at 15.00. A 4-hour-20-minute stay costs what?

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/real-time-problems_02.c`

```c
#include <stdio.h>
int main(void){int minutes=260;int hours=(minutes+59)/60;double fee=hours<=1?3.0:3.0+(hours-1)*1.5;if(fee>15.0)fee=15.0;printf("billable hours=%d fee=$%.2f\n",hours,fee);return 0;}
```

**Output**

```text
billable hours=5 fee=$9.00
```

---

## 3. Warehouse reorder alert

**Problem.** Given current stock 17, reorder point 20, and order quantity 50, report whether to reorder and the projected stock after ordering.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/real-time-problems_03.c`

```c
#include <stdio.h>
int main(void){int stock=17,reorder_point=20,order=50;if(stock<=reorder_point)printf("REORDER %d units; projected stock=%d\n",order,stock+order);else puts("stock sufficient");return 0;}
```

**Output**

```text
REORDER 50 units; projected stock=67
```

---

## 4. Payroll with overtime

**Problem.** Calculate 40 regular hours at 20.00/hour and 5 overtime hours at 1.5 times the regular rate.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/real-time-problems_04.c`

```c
#include <stdio.h>
int main(void){double regular=40, overtime=5, rate=20;double gross=regular*rate+overtime*rate*1.5;printf("gross pay=$%.2f\n",gross);return 0;}
```

**Output**

```text
gross pay=$950.00
```

---

## 5. Shipping fee by weight

**Problem.** Shipping costs 4.00 base plus 1.25 for each started kilogram over the first kilogram. Compute for 3.2 kg.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/real-time-problems_05.c`

```c
#include <stdio.h>
int main(void){double kg=3.2;int extra=(int)(kg-1.0);if(kg>1.0 && (double)extra<kg-1.0)extra++;double fee=4.0+1.25*extra;printf("weight=%.1f kg fee=$%.2f\n",kg,fee);return 0;}
```

**Output**

```text
weight=3.2 kg fee=$7.75
```

---

## 6. Temperature sensor moving average

**Problem.** Compute the 3-reading average for readings 21.5, 22.0, 22.5 degrees.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/real-time-problems_06.c`

```c
#include <stdio.h>
int main(void){double x[]={21.5,22.0,22.5};size_t n=sizeof x/sizeof x[0];double sum=0;for(size_t i=0;i<n;i++)sum+=x[i];printf("moving average=%.2f C\n",sum/(double)n);return 0;}
```

**Output**

```text
moving average=22.00 C
```

---

## 7. Low-stock reporting

**Problem.** Scan a set of product counts and list the number of items below their reorder threshold.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/real-time-problems_07.c`

```c
#include <stdio.h>
int main(void){int stock[]={3,12,0,8,21};int threshold[]={5,10,2,8,20};int alert=0;for(size_t i=0;i<5;i++)if(stock[i]<threshold[i]){printf("SKU%zu low: %d < %d\n",i+1,stock[i],threshold[i]);alert++;}printf("alerts=%d\n",alert);return 0;}
```

**Output**

```text
SKU1 low: 3 < 5
SKU3 low: 0 < 2
alerts=2
```

---

## 8. ATM denomination breakdown

**Problem.** Dispense 186 using denominations 100, 50, 20, 10, 5, and 1, greedily.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/real-time-problems_08.c`

```c
#include <stdio.h>
int main(void){int amount=186;int d[]={100,50,20,10,5,1};for(size_t i=0;i<sizeof d/sizeof d[0];i++){int n=amount/d[i];if(n)printf("%d x %d\n",d[i],n);amount%=d[i];}return 0;}
```

**Output**

```text
100 x 1
50 x 1
20 x 1
10 x 1
5 x 1
1 x 1
```

---

## 9. Rate-limit window counter

**Problem.** A simple fixed window permits at most 3 requests per 60-second window. Count five requests within the same window.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/real-time-problems_09.c`

```c
#include <stdio.h>
int main(void){int limit=3,accepted=0;for(int request=1;request<=5;request++){if(accepted<limit){accepted++;printf("request %d: allow\n",request);}else printf("request %d: reject\n",request);}return 0;}
```

**Output**

```text
request 1: allow
request 2: allow
request 3: allow
request 4: reject
request 5: reject
```

---

## 10. Network packet length validation

**Problem.** A 6-byte packet begins with a 2-byte big-endian payload length. Validate that the buffer contains the complete payload.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/real-time-problems_10.c`

```c
#include <stdio.h>
#include <stddef.h>
int main(void){unsigned char p[]={0,3,0x41,0x42,0x43};size_t n=sizeof p;size_t len=((size_t)p[0]<<8)|p[1];if(n>=2&&len<=n-2)printf("valid payload length=%zu\n",len);else puts("truncated packet");return 0;}
```

**Output**

```text
valid payload length=3
```

---

## 11. CRC-style XOR checksum

**Problem.** Compute a simple XOR checksum over three bytes; note that XOR is an example checksum, not a cryptographic integrity check.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/real-time-problems_11.c`

```c
#include <stdio.h>
int main(void){unsigned char bytes[]={0x10,0x20,0x30};unsigned char check=0;for(size_t i=0;i<sizeof bytes;i++)check^=bytes[i];printf("XOR checksum=0x%02X\n",check);return 0;}
```

**Output**

```text
XOR checksum=0x00
```

---

## 12. CSV row field parsing

**Problem.** Parse a deliberately simple comma-separated row of three integer fields and total them. Real CSV needs quoted-field handling.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/real-time-problems_12.c`

```c
#include <stdio.h>
int main(void){const char *row="12,7,5";int a,b,c;if(sscanf(row,"%d,%d,%d",&a,&b,&c)==3)printf("units=%d\n",a+b+c);else puts("invalid row");return 0;}
```

**Output**

```text
units=24
```

---

## 13. Student grade summary

**Problem.** Find the average and minimum in four quiz scores and print the count of scores at least 80.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/real-time-problems_13.c`

```c
#include <stdio.h>
int main(void){int s[]={75,88,92,65};int min=s[0],sum=0,passed=0;for(size_t i=0;i<4;i++){sum+=s[i];if(s[i]<min)min=s[i];if(s[i]>=80)passed++;}printf("average=%.2f min=%d at_least_80=%d\n",sum/4.0,min,passed);return 0;}
```

**Output**

```text
average=80.00 min=65 at_least_80=2
```

---

## 14. Delivery dispatch priority

**Problem.** Assign priority 1 to an express order, 2 to a standard order, and 0 when the order is cancelled.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/real-time-problems_14.c`

```c
#include <stdio.h>
enum OrderState{CANCELLED,STANDARD,EXPRESS};
int main(void){enum OrderState s=EXPRESS;int priority=s==CANCELLED?0:(s==EXPRESS?1:2);printf("dispatch priority=%d\n",priority);return 0;}
```

**Output**

```text
dispatch priority=1
```

---

## 15. Fixed-point money arithmetic

**Problem.** Represent $12.34 as integer cents and add $0.99 without floating-point rounding.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/real-time-problems_15.c`

```c
#include <stdio.h>
int main(void){long long cents=1234, fee=99;long long total=cents+fee;printf("total=$%lld.%02lld\n",total/100,total%100);return 0;}
```

**Output**

```text
total=$13.33
```

---

## 16. Daily temperature min/max

**Problem.** Scan daily temperatures and report their minimum and maximum.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/real-time-problems_16.c`

```c
#include <stdio.h>
int main(void){int t[]={18,21,17,25,20};int lo=t[0],hi=t[0];for(size_t i=1;i<5;i++){if(t[i]<lo)lo=t[i];if(t[i]>hi)hi=t[i];}printf("min=%d C max=%d C\n",lo,hi);return 0;}
```

**Output**

```text
min=17 C max=25 C
```

---

## 17. Input validation with strtol

**Problem.** Parse a numeric command-line-like string and reject trailing junk. Demonstrate with `42`.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/real-time-problems_17.c`

```c
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
int main(void){const char *s="42";char *end=NULL;errno=0;long v=strtol(s,&end,10);if(errno==0&&end!=s&&*end=='\\0')printf("valid integer=%ld\n",v);else puts("invalid integer");return 0;}
```

**Output**

```text
invalid integer
```

---

## 18. Circular buffer wraparound

**Problem.** Use a fixed-size ring of capacity 4 to push five values; the oldest entry is overwritten.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/real-time-problems_18.c`

```c
#include <stdio.h>
int main(void){int q[4]={0};size_t next=0;for(int v=1;v<=5;v++){q[next]=v;next=(next+1)%4;}printf("oldest=%d order:",q[next]);for(size_t i=0;i<4;i++)printf(" %d",q[(next+i)%4]);putchar('\n');return 0;}
```

**Output**

```text
oldest=2 order: 2 3 4 5
```

---

## 19. Device status bit flags

**Problem.** Set READY and ERROR flags, test READY, then clear ERROR while preserving other flags.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/real-time-problems_19.c`

```c
#include <stdio.h>
#include <stdint.h>
int main(void){const uint32_t READY=1u<<0,ERROR=1u<<3;uint32_t status=READY|ERROR;printf("ready=%d\n",(status&READY)!=0);status&=~ERROR;printf("status=%u\n",status);return 0;}
```

**Output**

```text
ready=1
status=1
```

---

## 20. Simple binary record count

**Problem.** Read a fixed-size array of records in memory and count active records. Discuss why raw struct serialization needs a defined format.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/real-time-problems_20.c`

```c
#include <stdio.h>
struct Device{unsigned id;int active;};
int main(void){struct Device d[]={{1,1},{2,0},{3,1}};int n=0;for(size_t i=0;i<3;i++)n+=d[i].active!=0;printf("active devices=%d\n",n);return 0;}
```

**Output**

```text
active devices=2
```

---

## 21. Log severity tally

**Problem.** Count INFO, WARN, and ERROR events in an array and print totals.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/real-time-problems_21.c`

```c
#include <stdio.h>
enum Level{INFO,WARN,ERROR};
int main(void){enum Level log[]={INFO,ERROR,WARN,INFO,ERROR,ERROR};int n[3]={0};for(size_t i=0;i<6;i++)n[log[i]]++;printf("INFO=%d WARN=%d ERROR=%d\n",n[INFO],n[WARN],n[ERROR]);return 0;}
```

**Output**

```text
INFO=2 WARN=1 ERROR=3
```

---

## 22. Search for a customer ID

**Problem.** Search a small sorted customer-ID array with binary search and report the matching index.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/real-time-problems_22.c`

```c
#include <stdio.h>
int main(void){int ids[]={101,104,110,125,140};int key=125,lo=0,hi=4,at=-1;while(lo<=hi){int m=lo+(hi-lo)/2;if(ids[m]==key){at=m;break;}if(ids[m]<key)lo=m+1;else hi=m-1;}printf("customer=%d index=%d\n",key,at);return 0;}
```

**Output**

```text
customer=125 index=3
```

---

## 23. Order total with tax

**Problem.** Sum three line items and apply 8.25% sales tax, keeping rounding to two decimals for display.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/real-time-problems_23.c`

```c
#include <stdio.h>
int main(void){double price[]={12.50,3.25,4.00};double subtotal=0;for(size_t i=0;i<3;i++)subtotal+=price[i];double total=subtotal*1.0825;printf("subtotal=$%.2f total=$%.2f\n",subtotal,total);return 0;}
```

**Output**

```text
subtotal=$19.75 total=$21.38
```

---

## 24. String length guard

**Problem.** Reject a fixed-size username buffer that cannot hold a maximum-length name plus terminator.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/real-time-problems_24.c`

```c
#include <stdio.h>
#include <string.h>
int main(void){char name[]="alex";size_t capacity=sizeof name;size_t max_name=8;printf("name length=%zu capacity=%zu\n",strlen(name),capacity);if(capacity<max_name+1)puts("buffer too small for max name");else puts("buffer size OK");return 0;}
```

**Output**

```text
name length=4 capacity=5
buffer too small for max name
```

---

## 25. Rolling average from last three samples

**Problem.** For samples 10, 13, 16, 19, report the moving average of each complete window of three.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/real-time-problems_25.c`

```c
#include <stdio.h>
int main(void){int x[]={10,13,16,19};for(size_t i=0;i+2<4;i++){int sum=x[i]+x[i+1]+x[i+2];printf("window %zu average=%.2f\n",i+1,sum/3.0);}return 0;}
```

**Output**

```text
window 1 average=13.00
window 2 average=16.00
```

---

## 26. Function pointer dispatch

**Problem.** Select one of two arithmetic operations using a function pointer, then apply it to 8 and 3.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/real-time-problems_26.c`

```c
#include <stdio.h>
int add(int a,int b){return a+b;}int mul(int a,int b){return a*b;}
int main(void){int (*op)(int,int)=mul;printf("result=%d\n",op(8,3));return 0;}
```

**Output**

```text
result=24
```

---

## 27. Resource cleanup on error

**Problem.** Open a file, write a line, check the write, close it, and handle a close failure. This minimal example demonstrates resource lifecycle structure.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/real-time-problems_27.c`

```c
#include <stdio.h>
int main(void){FILE *f=fopen("practice-resource.txt","w");if(!f){perror("fopen");return 1;}if(fputs("record\n",f)==EOF){perror("write");fclose(f);return 1;}if(fclose(f)!=0){perror("close");return 1;}puts("write and close succeeded");return 0;}
```

**Output**

```text
write and close succeeded
```

---

## 28. Clamp a sensor reading

**Problem.** Clamp a signed sensor reading to a valid range from -40 through 125 degrees.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/real-time-problems_28.c`

```c
#include <stdio.h>
int main(void){int reading=140,min=-40,max=125;if(reading<min)reading=min;if(reading>max)reading=max;printf("validated=%d C\n",reading);return 0;}
```

**Output**

```text
validated=125 C
```

---

## 29. Average without integer truncation

**Problem.** Compute the average of 3, 4, and 4 as a floating-point result, not an integer-truncated result.

**Idea.** Use nested loops: an outer loop chooses the row; inner loops decide spaces and visible characters.

**Solution source:** `code/real-time-problems_29.c`

```c
#include <stdio.h>
int main(void){int sum=3+4+4;printf("average=%.3f\n",(double)sum/3);return 0;}
```

**Output**

```text
average=3.667
```
