# include <stdio.h>
# include <string.h>

char* next(char* from, char* word)
{
while ((*from)!='\0'&&((*from)<'a'||(*from)>'z'))
        from++;

       
if ((*from)=='\0')
        return NULL;
        
      
char *a = from;
 while ((*a)!='\0'&&(*a)>='a'&&(*a)<='z')
         a++;
 
 
strncpy(word,from,a-from);
word[a-from]='\0';

return a;
}

int main()
{ char s[100],*a,c[100];
  gets(s);

  for (a=next(s,c);a!=NULL;a=next(a,c))
        printf("%s ",c);

 

return 0;
}
