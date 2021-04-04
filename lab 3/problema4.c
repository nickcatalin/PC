

#include <stdio.h>

int main() 
{

int a,b,c,s;
scanf("%d",&a);
while(b!=0)
{c=a;s=0;
    while(c!=0){
      s=s+c%10;
     c=c/10;
     }
if(a%s==b)
printf("(%d %d)",a,b);

a=b;
scanf("%d",&b);


}



}