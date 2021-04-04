
#include <stdio.h>

int main ()
{
        int n,v[100],i,nrpos=0,nrneg=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&v[i]);


        for(i=0;i<n;i++)
            if(v[i]<0)
            nrneg++;
             else
                nrpos++;



             printf("%d %d",nrneg,nrpos);




        return 0;
}
