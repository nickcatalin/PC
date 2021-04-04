#include <stdio.h>
#include <stdlib.h>
int main()
{
   int n , seed,i;
scanf("%d",&seed);
srand(seed);
for(i=0;i<=2;i++)
{
n=rand();
       printf("%d\n",n);
 
}

}