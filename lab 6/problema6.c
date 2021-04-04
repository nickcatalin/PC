#include <stdio.h>

void spirala(int A[][100],int m,int n,int V[])
{ int i=0,j=0,k1,k2,nr=0,cases=0,up=0,down=m-1,left=0,right=n-1,a[4]={1,0,-1,0},b[4]={0,1,0,-1};
       
    V[0] = A[0][0];nr++;

    while (nr<n*m){
        k1=i+a[cases];
        k2=j+b[cases];
         if (!(up<=k1&&k1<=down&&left<=k2&&k2<=right)){
            switch (cases){
                case 0: if (up>down) up--;break;
                case 1: if (right>left) right++;break;
                case 2: if (down>up) down++;break;
                 case 3: if (left>right) left--;break;
            }
             cases=(cases+1)%4;
         }
    i=i+a[cases];    
    j=j+b[cases];
    V[nr]=A[i][j];
    nr++;
    }
}

void afisare(int V[],int dim)
{  int i;
    for (i=0;i<dim;i++)
         printf("%d ",V[i]);
}

int main()
{
    int A[100][100],m,n,V[10000],i,j;
        scanf("%d%d",&m,&n);
        
    for (i=0;i<m;i++) {
       for (j=0;j<n;j++)
         scanf("%d",&A[i][j]);
    }
        
        spirala(A,m,n,V);
        afisare(V,m*n);


        return 0;
}
 
