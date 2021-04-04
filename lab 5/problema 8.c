#include <stdio.h>

int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int min(int a,int b)
{
    if (a>b)
        return b;
     else
        return a;
}

int lseg(int as,int bs,int ad,int bd)
{
        int cd,cs;
        cd=min(ad,bd);
        cs=max(as,bs);
        if (cd<cs)
            return 0;

        return cd-cs;
}

int arie_intersectie(int x11,int y11,int x12,int y12,int x21,int y21,int x22,int y22)
{
    return lseg(x11,x21,x12,x22)*lseg(y12,y22,y11,y21);
}

int main()
{  int arie;
        int x11,y11,x12,y12,x21,y21,x22,y22;

        scanf("%d%d%d%d%d%d%d%d",&x11,&y11,&x12,&y12,&x21,&y21,&x22,&y22);

        arie=arie_intersectie(x11,y11,x12,y12,x21,y21,x22,y22);

        printf("%d",arie);

        return 0;
}
