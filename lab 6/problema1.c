#include <stdio.h>
void sortare(int v[],int n)
{
    int i,j,k;
    for (i = 0; i < n-1; i++)
          for (j = 0; j < n-i-1; j++)
        if (v[j] > v[j+1])
            {k=v[j];
             v[j]=v[j+1];
             v[j+1]=k;
            }
}
int main(){

    int n,i,v[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
          scanf("%d",&v[i]);

     sortare(v,n);

    for(i=0;i<n;i++)
        printf("%d ",v[i]);

    return 0;
}
