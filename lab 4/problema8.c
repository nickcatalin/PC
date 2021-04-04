#include <stdio.h>

int main(){

    int n,i,a=0,b=1,c=1,v1[100],v2[100];

    scanf("%d",&n);
    for(i=0;i<n;i++)
          scanf("%d",&v1[i]);

    for(i=1;i<n;i++){
         if(v2[i-1]>=0)
         { v2[i]=v2[i-1]+v1[i];
            c++;
         } else
             { v2[i]=v1[i];
                c=1;
                  }
        if (v2[i]>=v2[a])
           { a=i;
             b=c;
                 }
    }


    for(i=a-b+1;i<=a;i++)
        printf("%d ",v1[i]);




    return 0;
}
