#include <stdio.h>

void count(int n, int *v, int *zero, int *poz, int *neg)
{int i;
for(i=0;i<n;i++)
{   if(v[i]>0)
        *poz=*poz+1;
    if(v[i]<0)
        *neg=*neg+1;
    if(v[i]==0)
        *zero=*zero+1;
}

}


int main()
{ int n,v[100],i,a=0,b=0,c=0;
scanf("%d",&n);
for(i=0;i<n;i++)
   scanf("%d",&v[i]);

count(n,v,&a,&b,&c);
printf("nule=%d \n pozitive=%d \n negative=%d",a,b,c);



return 0;
}