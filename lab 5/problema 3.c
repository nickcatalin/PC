#include <stdio.h>

int prim(int n)
{ int i,a,d1,d2,prim1,prim2;

     for(i=1;i<=n/2;i++)
     {a=n-i;

      prim1=1;
      d1=2;
        while (d1<=i/2)
           {  if (i%d1==0)
                prim1=0;
              d1=d1+1;
                             }

     prim2=1;
      d2=2;
         while (d2<=a/2)
           {  if (a%d2==0)
                 prim2=0;
               d2=d2+1;
                        }

if(prim1==1&&prim2==1)
    printf("%d+%d\n",i,a);

      }

}




int main(){
 int n;
scanf("%d",&n);
prim(n);

return 0;
}
