
#include <stdio.h>

int main ()
{
        int n,m,v[10][10],i,j,maxlinie,minimul=1000;

        scanf("%d%d",&n,&m);
        for(i=0;i<n;i++)
          for(j=0;j<m;j++)
           scanf("%d",&v[i][j]);


        for(i=0;i<n;i++)
        {  maxlinie=0;
            for(j=0;j<m;j++)
               if(maxlinie<v[i][j])
                  maxlinie=v[i][j];
            if(minimul>maxlinie)
                    minimul=maxlinie;
                 }

 printf("%d",minimul);



        return 0;
}
