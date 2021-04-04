
#include <stdio.h>

int main ()
{
        int n,m,v1[100],v2[100],v3[100],i,j,k;
        scanf("%d%d",&n,&m);
        for (i=0;i<n;i++)
            scanf("%d",&v1[i]);


        for (i=0;i<m;i++)
            scanf("%d",&v2[i]);

        i=0;
        j=0;
        k=0;
        while (i<n&&j<m)
                if (v1[i]<v2[j]) {
                        v3[k]=v1[i];
                        i++;
                        k++;
                }
                else {
                        v3[k]=v2[j];
                        j++;
                        k++;
                }
        while (i<n) {
                v3[k]=v1[i];
                i++;
                k++;
        }
        while (j<m) {
                v3[k]=v2[j];
                j++;
                k++;
        }

        for (i=0;i<n+m;i++)
                printf("%d ",v3[i]);





        return 0;
}
