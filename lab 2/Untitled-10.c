#include <stdio.h>
#include <stdlib.h>
int main()
{
    int h,m,s,k;
  
    if(scanf("%d",&h))
    k++;
if(scanf("%d",&m))
k++;

if(scanf("%d",&s))
k++;

if(k==3){
  if(h<10&&m<10&&s<10)
printf("0%d:0%d:0%d",h,m,s);

if(h>9&&m>9&&s>9)
printf("%d:%d:%d",h,m,s);

if(h<10&&m>9&&s>9)
printf("0%d:%d:%d",h,m,s);

if(h<10&&m<10&&s>9)
printf("0%d:0%d:%d",h,m,s);

if(h>9&&m<10&&s<10)
printf("%d:0%d:0%d",h,m,s);

if(h>9&&m<10&&s>9)
printf("%d:0%d:%d",h,m,s);

if(h>9&&m>9&&s<10)
printf("%d:%d:0%d",h,m,s);

if(h<10&&m>9&&s<10)
printf("0%d:%d:0%d",h,m,s);  
}
else
printf("Date incorect introduse!");
    
}