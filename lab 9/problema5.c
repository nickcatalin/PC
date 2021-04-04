#include <stdio.h>
typedef struct complex {
        float im,re;
}complex;
complex adunare(complex a,complex b)
{complex c;
c.re=a.re+b.re;
c.im=a.im+b.im;
return c;}
complex scadere(complex a,complex b)
{complex c;
c.re=a.re-b.re;
c.im=a.im-b.im;
return c;}
complex inmultire(complex a,complex b)
{complex c;
c.im=a.im*b.re+a.re*b.im;
c.re=a.re*b.re-a.im*b.im;
return c;}
complex putere(complex a,int putere)
{int i;
complex c;
c.im=0;c.re=1;
for (i=0; i<putere;i++)
    c = inmultire(c, a);
return c;}
void scrie(complex a)
{printf("(%.2f, %.2f)\n", a.re, a.im);}

int main()
{int n,i;
float v[20];
complex polinomul,x,aux;
scanf("%d",&n);
for (i=0;i<=n;i++)
    scanf("%f", &v[i]);

scanf("%f",&x.re);
scanf("%f",&x.im);
polinomul.im=0;polinomul.re=0;

for(i=0;i<=n;i++)
{aux.re=v[i];
aux.im=0;
polinomul=adunare(polinomul,inmultire(aux,putere(x,i)));}
        
scrie(polinomul);
        
return 0;
}