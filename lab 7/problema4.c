
# include <stdio.h>
# include <string.h>

char* substr(char* src, int n, char* dest)
{       strncpy(dest, src, n);
        if (n<=strlen(src))
            dest[n]='\0';
 
      return dest;
}
int main()
{char s[100],su[100];
  int a,n;

        scanf("%s%d%d",s, &a, &n);
        substr(s+a,n,su);

        printf("%s",su);

 return 0;
}

