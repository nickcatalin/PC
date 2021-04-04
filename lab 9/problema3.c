#include <stdio.h>
#include <time.h>

char *timestr(struct tm t, char *time)
{
    sprintf(time,"%02d:%02d:%02d",t.tm_hour,t.tm_min,t.tm_sec);  
      return time; 
}

int main()
{ time_t timp;
   char s[10];
    time(&timp);
    struct tm *tm_timp;
    tm_timp=localtime(&timp);

   printf("%s",timestr(*tm_timp,s));

     return 0;  
}