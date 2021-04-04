#include <stdio.h>
void transform(int v[], int n, int x)
{int i,j,d=0,aux,k=0;
for(i=0;i<n;i++)
    if(v[i]<x)
       d++;
 for(i=0;i<d;i++)
   for(j=n-1-k;j>=d;j--)
     if(v[i]>=x&&v[j]<x)
         {aux=v[i];
          v[i]=v[j];
          v[j]=aux;
           k++;
          break;
           }
    }
int main(){

    int n,i,x,v[100];

    scanf("%d%d",&n,&x);
    for(i=0;i<n;i++)
          scanf("%d",&v[i]);

    transform(v,n,x);

           for(i=0;i<n;i++)
             printf("%d ",v[i]);

    return 0;
}
