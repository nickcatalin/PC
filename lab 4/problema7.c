
# include <stdio.h>

int main()
{
        int v[100],n,i,m,mstart,start;

        scanf("%d", &n);
        for (i=0;i<n;i++) {
            scanf("%d",&v[i]);
        }

        m=0;
        mstart=-1;
        start=0;
        for(i=1;i<n;i++)
                if (v[i-1]>v[i]) {
                        if (i-start>m) {
                                m=i-start;
                                mstart=start;
                        }
                        start=i;
                }

        for (i=mstart;i<mstart+m;i++)
                printf("%d ",v[i]);

        return 0;
}
