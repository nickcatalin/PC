
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,i,*v,n,cap=5;
    n=0;
    v=(int*) malloc(cap * sizeof(int));

    scanf("%d", &a);
        
    while (a != 0 ) {
        if (cap==n) {
            cap*=2;
                v=realloc(v,cap * sizeof(int));
            
                   }
        v[n++]=a;            
        scanf("%d",&a);
            
            }

    for(i=0;i<n;i++)
        printf("%d ",v[i]);

return 0;
}