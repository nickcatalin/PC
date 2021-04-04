#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c;
  
    scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a>b&&a>c)
  if(b>c)
     printf("%d %d %d",c,b,a);
     else
          printf("%d %d %d",b,c,a);

   if(b>a&&b>c)
  if(a>c)
     printf("%d %d %d",c,a,b);
     else
          printf("%d %d %d",a,c,b);
        
        
  if(c>b&&c>a)
    if(b>a)
     printf("%d %d %d",a,b,c);
     else
          printf("%d %d %d",b,a,c);



    
    
}