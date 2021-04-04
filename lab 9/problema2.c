#include <stdio.h>
#include <time.h>
int main()
{
   time_t timp;
   time(&timp);
   printf("%s",ctime(&timp));


return 0;
}