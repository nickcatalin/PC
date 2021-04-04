#include <stdio.h>

 int cmmmc(int a, int b)
{ int c=a;

    while(c%b!=0)
        c=c+a;
return c;
}




int main(){

  int x1,y1,x2,y2,z;
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);

   z=cmmmc(y1,y2);

   x1=x1*(z/y1);
   x2=x2*(z/y2);

printf("%d %d\n%d %d",x1,z,x2,z);


    return 0;
}
