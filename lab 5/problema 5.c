#include <stdio.h>

 int factorial(int n)
{int i,a=1;
for(i=1;i<=n;i++)
  a=a*i;
  return a;
}


double putere(double x, int n)
{int i;
double a=1;
for(i=1;i<=n;i++)
    a=a*x;

 return a;

}


 double taylor(double x, int n)
{double ex=1;int i;
for(i=1;i<=n;i++)
ex=ex+putere(x,i)/factorial(i);

printf("%.4lf",ex);
}


int main(){
double x;
int n;
scanf("%lf%d",&x,&n);
taylor(x,n);



    return 0;
}
