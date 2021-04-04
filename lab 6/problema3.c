#include <stdio.h>
int intersectie(int a[],int n,int b[],int m,int c[])
{int i,j,k=0;
 for(i=0;i<n;i++)
  for(j=0;j<m;j++)
    if(a[i]==b[j])
      {c[k]=a[i];
        k++;
      }
return k;
}
int main(){

    int n,m,a[100],b[100],c[100],p,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    scanf("%d",&m);
    for(j=0;j<m;j++)
        scanf("%d",&b[j]);

    p=intersectie(a,n,b,m,c);
        printf("%d\n",p);

    for(i=0;i<p;i++)
        printf("%d ",c[i]);

    return 0;
}
