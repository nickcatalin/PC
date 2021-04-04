# include <stdio.h>
# include <string.h>

char* strdel(char *p,int n)
{
    if(strlen(p)<=n) {
        *p='\0';
        return p;
          }

     strcpy(p,p+n);
        return p;
}

char* strins(char* p,char *s)
{ char *tail_p=strdup(p);
  
     strcpy(p,s);
     strcat(p,tail_p);
     return p;
}

int main()
{
        char s[100],s1[100],s2[100];

        gets(s);
        scanf("%s%s",s1,s2);

        char *p;
        for (p=strstr(s,s1);p!=NULL;p=strstr(p+strlen(s2),s1))
        {   strdel(p,strlen(s1));
            strins(p,s2);
                }

        printf("%s",s);      


    return 0;
}