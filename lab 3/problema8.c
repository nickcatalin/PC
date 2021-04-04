
#include <stdio.h>
#include <math.h>

int main ()
{
        double x,r1,r2,eps=0.00001;
        int i;

        scanf("%lf",&x);

        r1=r2=x/2;
        do
        {
                r1=r2;
                r2=(r1+x/r1)/2;
        } while(fabs(r1-r2)>eps);

        printf("%lf  %lf\n",r2,sqrt(x));

       

        return 0;
}

