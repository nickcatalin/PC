#include <stdio.h>
#include <string.h>

int siruri(char a[], char b[])
{
        int n,m,i;
        n=strlen(a);
        m=strlen(b);

        for (i=0;i<n&&i<m;i++)
                if (a[i]>b[i])
                        return 1;
                else if (a[i]<b[i])
                        return -1;

        if (n>m)
                return 1;
        if (n<m)
                return -1;
        return 0;
}

int main()
{
        char a[100],b[100];
        scanf("%s",a);
        scanf("%s",b);

        printf("%d\n",siruri(a,b));

        return 0;
}
