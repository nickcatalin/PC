#include <stdio.h>

int transforma(int n)
{int copie=n,v[12]={0},a=0,i,j;


while(copie!=0)
    {if(copie%10==0)
      a=1;
      copie=copie/10;
     }
    while(n!=0)
    {  i=n%10;
        v[i]++;
        n=n/10;
    }
     if(a==0)
        for(i=1;i<=9;i++)
          if(v[i]!=0)
           for(j=1;j<=v[i];j++)
             copie=copie*10+i;
     if(a==1)
        for(i=9;i>=0;i--)
          if(v[i]!=0)
           for(j=1;j<=v[i];j++)
             copie=copie*10+i;

return copie;
}

int main(){

int n;
scanf("%d",&n);

printf("%d", transforma(n));

    return 0;
}
