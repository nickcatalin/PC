
#include <stdio.h>

int main ()
{
        int n,v[100],i,descrescator,crescator,constant,neordonat,primulelement;
       scanf("%d",&n);


        for(i=0;i<n;i++)
            scanf("%d",&v[i]);

        primulelement=v[0];
descrescator=0;
crescator=0;
constant=0;
        for(i=0;i<n;i++)
            if(v[i]<=v[i+1])
            descrescator=1;

        for(i=0;i<n-1;i++)
            if(v[i]>=v[i+1])
            crescator=1;

        for(i=0;i<n;i++)
            if(v[i]!=v[0])
                constant=1;

           for(i=1;i<n-1;i++)
            if((v[i-1]>v[i]&&v[i]<v[i+1])||(v[i-1]<v[i]&&v[i]>v[i+1]))
                neordonat=1;

        if(descrescator==0)
                    printf("descrescator");
 if(crescator==0)
                    printf("crescator");
 if(constant==0)
                    printf("constant");
 if(neordonat==1)
                    printf("neordonat");




        return 0;
}
