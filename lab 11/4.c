#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *input, *output, *tabel_codificare;
    char s[128];
    char c1, c2, buffer[1000];
    int i, n;

    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");
    tabel_codificare = fopen("tabela_de_codare.in", "r");
    for (i = 0; i < 128; i++)
        s[i] = i;
    while (fgets(buffer, 1000, tabel_codificare) != NULL)
    {
        if (sscanf(buffer, "%c %c", &c1, &c2) == 2)
            s[c1] = c2;
    }

    while (fgets(buffer, 1000, input) != NULL)
    {
        for (i = 0, n = strlen(buffer); i < n; i++)
            fprintf(output, "%c", s[buffer[i]]);
    }

    fclose(tabel_codificare);
    fclose(input);
    fclose(output);
    return 0;
}
