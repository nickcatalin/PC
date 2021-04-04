#include <stdio.h>
#include <math.h>
#include <string.h>

char *strrev(char *str)		//aceasta funtie inverseaza sirul (aceasta exista in string.h dar pe linux am vazut ca nu merge)
{
    char *p1, *p2;

    if (! str || ! *str)
        return str;
    for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
return str;  //returneaza sirul inversat
}
void dec_to_bin (int n, char s[])
{	int i = 0;;
	while (n > 0)							//	]		
  		{ 	s[i] = n % 2 + '0';				//	]
  			n = n / 2;						//	]-> acest while incarca in sirul "s" numarul "n" transformat in bin
  			i++;							//	]
 		}									//	]
  	
	  s[i] = '\0';      //aici pune "\0" la sfarsitul sirului
	
	if (strlen(s) < 16)								//	]					
	{	s[16] = '\0';								//	] aici testeaza daca sirul are 16 caractere 		
		for (i = strlen(s); i < 16; i++)			//	] daca nu are adauga la sfarsit caracaterul "0" pana acesta o sa aiba 16 caractere		
			s[i]='0';								//	]	
	}								

   strrev(s); //se inverseaza sirul

}

int bin_to_dec(char s[])
{int numar = 0, putere = 1, i;														
	
for(i = strlen(s)-1; i >= 0; i--)								// ]							
{	numar = numar + (s[i] - '0') * putere;						// ]->	acest for transforma caracterele sirului "s" din binary in decimal 				
	putere = putere * 2;										// ]										
}
	
return numar;	
}

void string_to_matrix(char s[], int a[5][5])
{	int i, j, k = 0;
	
for (i = 0; i < 4; i++)							//]				
	for (j = 0; j < 4; j++)						//] aici sunt incarcate in matricea "a" elementele sirului "s"			
	{	a[i][j] = s[k] - '0';					//]	prin convertirea acestora din char in int (prin scaderea caracterului '0')			
		k++;									//]									
	}


}

void matrix_to_string(char s[],int a[5][5])
{int i, j, k = 0;
	
for (i = 0; i < 4; i++)							//]		
	for (j = 0; j < 4; j++)						//] aici se incarca elementele matricii "a" in sirul "s"			
	{	s[k] = a[i][j] + '0';					//]	prin convertirea acestora din int in char (prin adaugarea caracterului '0')			
		k++;									//]
	}


}

int main()
{ int n, i, j, a[5][5], xi, yi, xf, yf, m;
	char s[18];
	for(i = 0; i < 5; i++)
		for(j = 0; j < 5; j++)
			a[i][j] = 0;
	scanf("%d",&n);  //citirea numarului

	dec_to_bin(n, s); //trecerea lui n de la decimal la binary si incarcarea acestuia in sirul s
	

	string_to_matrix(s, a); //apelarea functiei de adaugare in matricea "a" a elementelor sirului "s"
	

		scanf("%d", &m);	//citirea numarului de mutari

		for ( i = 0; i < m; i++)																											
		{	scanf("%d%d%d%d", &xi, &yi, &xf, &yf);					//]																						
			if (a[xi][yi] == a[xf][yf])								//]										
			{		a[xi][yi] = 0;									//]		jocul cerut							
					a[xf][yf] = 0;									//]									
				}else{												//] 						
				   	if (a[xi][yi] == 1 && a[xf][yf] == 0)			//]															
				  		{	a[xi][yi] = 0;							//]											
							a[xf][yf] = 1;							//]											
						}											//]							
							   										//]								
				}
		}


	matrix_to_string(s, a);  //apelarea functiei ce copiaza in sirul "s" elementele matricii "a"  dupa jocul cerut

	printf("%d\n", bin_to_dec(s)); 			// printarea numarului rezultat dupa joc


return 0;
}