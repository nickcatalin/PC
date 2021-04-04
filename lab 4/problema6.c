# include <stdio.h>

int main()
{
        int n,i,j,v[100][100];

        scanf("%d",&n);
        for(i=0;i<n;i++)
                for (j=0;j<n;j++)
                        scanf("%d",&v[i][j]);

        for(j=1;j<n;j++){
                for (i=n-j;i<n;i++)
                        printf("%d ",v[i][j]);

        }
      return 0;
}
