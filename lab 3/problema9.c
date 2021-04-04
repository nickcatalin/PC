
#include <stdio.h>
int main() {
    int i,n,a=0,b=1,c,j,k;
   
    scanf("%d", &n);


    for (i=1;i<=n;i++) {
        k=0;
     
      
      for(j=2;j<=a;j++)
      if(a%j==0)
      k++;
      
      if(k==1)
      printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
    }

    return 0;
}