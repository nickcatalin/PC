#include <stdio.h>

void swapvalue(int *a, int *b) 
{
   int t;
   t = *a;
   *a = *b;
   *b = t;
}

int main()
{
int n, m, a[50][50], i, j, k, colector[2][50];
 
 	scanf("%d%d",&n, &m); // citirea numarului de linii si de coloane a matricii
    for(i = 0; i < 50; i++)
	 {for(j = 0; j < 50; j++)
	    a[i][j] = 0;
		colector[1][i]=0;
		colector[0][i]=0;

	 }
	
	for(i = 0; i < n; i++)
	 for(j = 0; j < m; j++)
	   scanf("%d", &a[i][j]);				// citirea elementelor din matrice

	scanf("%d", &k);   						//citirea numarului k pentru aflarea celor mai k slabe randuri

	for (i = 0; i < n; i++){
	 for (j = 0; j < m; j++)
	  colector[1][i] = colector[1][i] + a[i][j];				// adaugarea intr-o matrice de 2*n a sumei elementelor pentru fiecare linie in b[1][i] si
	    colector[0][i] = i;							// a liniei in care sunt elementele adunate
	}
	    

for (i = 0; i < n-1; i++)       
  for (j = 0; j < n-i-1; j++)  
    if (colector[1][j] > colector[1][j+1]) 
	  { 
		swapvalue(&colector[1][j], &colector[1][j+1]);
	   
		swapvalue(&colector[0][j], &colector[0][j+1]);
	  }

for (i = 0; i < k-1; i++)
	printf("%d ", colector[0][i]); // printarea celor k-1 linii slabe 
 
   
printf("%d",colector[0][k-1]);  // printarea ultimei linii k deoarece nu trebuia sa mai punem un " " la final
 printf("\n");

return 0;
}