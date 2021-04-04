#include <stdio.h>
#include <string.h>
void copiere_a(double a[80][80], double copie_a[80][80], int n, int m)  // am facut aceasta functie pentru a copia mai rapid elementele matricei "a"
{int i, j;																// in matricea "copie_a"	

for (i = 0; i < n; i++)
	for (j = 0; j < m; j++)
  		copie_a[i][j] = a[i][j];

}

void smooth(int n, int m, double copie_a[80][80], double a[80][80])  // functia smooth
{int i, j;

copiere_a(a, copie_a, n, m);
for (i = 1; i < n-1; i++)
	for (j = 1; j < m-1; j++)
  		a[i][j] = (copie_a[i-1][j-1]+copie_a[i-1][j]+copie_a[i-1][j+1]+copie_a[i][j-1]+copie_a[i][j]+copie_a[i][j+1]+copie_a[i+1][j-1]+copie_a[i+1][j]+copie_a[i+1][j+1])/9;
															// mai sus cu un rand gasim transformarea elementului "a[i][j]" cu formula data in problema
}

void blur(int n,int m,double copie_a[80][80],double a[80][80])
{int i,j;
copiere_a(a,copie_a,n,m);
for (i = 1; i < n-1; i++)
	for (j = 1; j < m-1; j++)
		a[i][j] = (copie_a[i-1][j-1]+2*copie_a[i-1][j]+copie_a[i-1][j+1]+2*copie_a[i][j-1]+4*copie_a[i][j]+2*copie_a[i][j+1]+copie_a[i+1][j-1]+2*copie_a[i+1][j]+copie_a[i+1][j+1])/16;
											// mai sus cu un rand gasim transformarea elementului "a[i][j]" cu formula data in problema
}


int main()
{
int n, m, i, j, k, filtru_nr;
char filtru[10];
double a[80][80], copie_a[80][80];
	
	scanf("%d%d", &n, &m); // citirea numarului de linii, respectiv de coloane
	
for (i = 0; i < n; i++)
	for (j = 0; j < m; j++)
		scanf("%lf", &a[i][j]);  // citirea elementelor matricii
	     
scanf("%d", &k);		// citirea numarului de filtre

 

for (filtru_nr = 1; filtru_nr <= k; filtru_nr++)   // apelarea filtrelor in randul in care au fost citite
{	scanf("%s", filtru);
	if (strcmp(filtru,"blur") == 0)
			blur(n, m, copie_a, a);					// apelarea functiei pentru efectul de blur
		else
			smooth(n, m, copie_a, a);				// apelarea functiei pentru efectul de smooth

	}


for ( i = 0; i < n; i++)
{	for ( j = 0; j < m; j++)
	    printf("%8.3lf", a[i][j]);				// afisarea  elementelor matricii
		printf("\n");
	}

return 0;
}