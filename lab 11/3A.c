#include <stdio.h>
#include <string.h>
#define BUFMAX 1005
#include <stdlib.h>
int main(int argc, char **argv)
{
    FILE *pFile, *dest;
    char buffer[BUFMAX];

    pFile = fopen("input1.txt", "r");

    while (fgets(buffer, BUFMAX, pFile) != NULL)
    {
        if (strstr(buffer, "vacanta") != NULL)
            printf("%s", buffer);
    }
    fclose(pFile);
}