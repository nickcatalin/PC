#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_VALUE 200

int cmp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main(void)
{
    int N, i, k, poz;
    int *v;
    int *v2;
    printf("Introduceti dimensiunea vectorului:\n");
    scanf("%d", &N);

    v = calloc(N, sizeof(int));
    if (!v)
        printf("Nu am putut aloca memorie pentru v!\n");

    srand(time(NULL));
    for (i = 0; i < N; ++i)
        v[i] = (rand() % MAX_VALUE) + 1;

    scanf("%d", &k);
    qsort(v, N, sizeof(int), cmp);

    for (i = 0; i < N; ++i)
        printf("%d ", *(v + i));
    printf("\n");
    v2 = (int *)bsearch(&k, v, N, sizeof(int), cmp);
    poz = (int)(v2 - v);
    if (poz >= 0)
    {
        printf("%d", poz);
    }
    else
    {
        printf("NULL");
    }

    free(v);
    return 0;
}