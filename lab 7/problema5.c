
# include <stdio.h>
# include <limits.h>
# include <stdlib.h>
# include <math.h>

void panta(int x1,int y1,int x2,int y2,float *m,float *n)
{
  if (x1==x2){
    *m=INT_MAX;
    *n=0;
    }

  if (x2<x1)
    panta(x2,y2,x1,y1,m,n);
  
  *m=((float)(y2-y1))/(x2-x1);
  *n=y1-(*m)*x1;
}

int main()
{  int x1,x2,y1,y2,x3,y3;
   float m1,m2,n1,n2;

 scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);

 panta(x1,y1,x2,y2,&m1,&n1);
 panta(x1,y1,x3,y3,&m2,&n2);

    if (m1==m2)
        printf("DA");
    else
        printf("NU");

    return 0;
}