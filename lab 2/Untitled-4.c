#include <stdio.h>
#include <stdlib.h>
int main()
{
   int x,y;
scanf("%f",&x);
scanf("%f",&y);

if(x>0&&y>0)
printf("1");
if(x<0&&y>0)
printf("2");
if(x>0&&y<0)
printf("4");
if(x<0&&y<0)
printf("3");
if(x==0)
printf("punct pe axe");
else if(y==0)
printf("punct pe axe");
}   