#include <stdio.h>
#include <math.h>

float dist(int x1, int y1, int x2, int y2)
{float d;

d=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);

return sqrt(d);
}

int main(){
int n,i,j,a,b,v1[100],v2[100];
float dis,dismax=0;

scanf("%d",&n);

    for(i=1;i<=n;i++)
      scanf("%d%d",&v1[i],&v2[i]);

      for(i=1;i<=n;i++)
        for(j=i+1;j<=n;j++)
          {dis=dist(v1[i],v2[i],v1[j],v2[j]);
            if(dis>dismax)
            {  dismax=dis;
                  a=i;
                  b=j;

            }
          }
      printf("%d %d\n%d %d\n%f",v1[a],v2[a],v1[b],v2[b],dismax);
 return 0;
    }


