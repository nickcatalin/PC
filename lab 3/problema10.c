
#include <stdio.h>

int main ()
{
        int n,c,i,d,s=0,n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0,n0=0;
        scanf("%d",&n);

        for(i=1;i<=n;i++)
          { c=i;
            while(c!=0)
              {d=c%10;
                c=c/10;
                    if(d==0)
                    n0++;
                    if(d==1)
                    n1++;
                    if(d==2)
                    n2++;
                    if(d==3)
                    n3++;
                    if(d==4)
                    n4++;
                    if(d==5)
                    n5++;
                    if(d==6)
                    n6++;
                    if(d==7)
                    n7++;
                    if(d==8)
                    n8++;
                    if(d==9)
                    n9++;


                }


          }






         s=n1+n2+n3+n4+n5+n6+n7+n8+n9+n0;


       printf("%d",s);

        return 0;
}
