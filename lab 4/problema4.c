# include <stdio.h>

int main()
{
        int n,m,p,q,v1[100][100],i,j,k,v2[100][100],v3[100][100];

        scanf("%d",&m);
        scanf("%d",&n);

        for (i=0;i<m;i++)
            for (j=0;j<n;j++)
                scanf("%d",&v1[i][j]);


        scanf("%d",&p);
         scanf("%d",&q);

        for (i=0;i<p;i++)
            for (j=0;j<q;j++)
                scanf("%d",&v2[i][j]);

           if (n!=p) {
                printf("imposibil");
                return 0;
            }

        for (i=0;i<m;i++)
            for (j=0;j<q;j++)
                for (k=0;k<n;k++)
                    v3[i][j]+= v1[i][k]*v2[k][j];

        printf("%d %d\n",m,q);
        for (i=0;i<m;i++) {
            for (j=0;j<q;j++)
                printf("%d ",v3[i][j]);

                printf("\n");
        }



        return 0;
}
