#include <stdio.h>
#include <math.h>

double integrala(double (*func)(double x),double a,double b,int n);           

int main()
{    int n=10000;
    printf("%.2lf\n",integrala(sin,0,M_PI,n));
        
    printf("%.2lf\n",integrala(cos,M_PI,0,n));

return 0;
}

double integrala(double (*func)(double x),double a,double b,int n)
{
        double y,z,s;
        int i;
        s=0;
        for (i=1;i<n;i++) 
        {
            y=((a-b)/n)*i;
            z=((a-b)/n)*(i-1);
            s=s+(func(y)+func(z))*((a-b)/n)/2;
        }
        return s;
}            