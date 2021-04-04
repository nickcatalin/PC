
#include <stdio.h>

int main()
{int a,b,c,rezultat,n,m,i;
a=1;
b=1;
c=1;
   scanf("%d %d",&n,&m);
   
   for(i=1;i<=n;i++)
   a=a*i;
    for(i=1;i<=m;i++)
   b=b*i; 
   for(i=1;i<=n-m;i++)
   c=c*i;
   
   rezultat=a/(b*c);
   printf("%d",rezultat);
   
   
   
}
