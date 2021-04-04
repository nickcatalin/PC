
#include <stdio.h>

int main ()
{int n, i;
 double y, s2 = 0;
 float x, s1 = 0;

scanf ("%d", &n);
scanf ("%f", &x);
scanf ("%lf", &y);
for (i = 0; i < n; i++) {
       s1 += x;
       s2 += y;
        if (i % (n / 10) == 0)
            printf("%f %e %lf %e\n\n", s1, s1, s2, s2);
                         }
        printf("%f %e %lf %e\n", s1, s1, s2, s2);

        return 0;
}
