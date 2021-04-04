#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c,d,min1,max1;
    min1=100000;
    max1=0;
    scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
scanf("%d",&d);
if(a<min1)
min1=a;
if(b<min1)
min1=b;
if(c<min1)
min1=c;
if(d<min1)
min1=d;



if(a>max1)
max1=a;
if(b>max1)
max1=b;
if(c>max1)
max1=c;
if(d>max1)
max1=d;
printf("%d\n",min1);
printf("%d\n",max1);
    
    
    
    
}