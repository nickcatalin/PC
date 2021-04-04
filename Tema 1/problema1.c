#include <stdio.h>

int max(int x, int y)  //functie pt calcularea maximului dintr 2 valori
{   if (x > y)
	        return x;
	    else
	        return y;
}

int min(int x,  int y) //functie pt calcularea minimului dintr 2 valori
{   if(x < y)
	        return x;
    	else
	        return y;
}
                    
void intersectie (int x1, int x2, int x3, int x4, int* x5, int* x6)
{
   if(x1 <= x2){
        if ( x3>x2 || x1>x4 ) {                     //]              
                *x5 = 0;                            //] pentru cazul multimii vide          
                *x6 = -1;                           //]
            }else {
                *x5 = max(x1, x3);                  //] aici aflam maximul dintre numerele din stanga ale intervalelor si            
                *x6 = min(x2, x4);                  //] minimul dintre partile din dreapta              
            }                                       //] in cazul in care intre cele dou intervale exista o intersectie       
   }
}

void reuniune (int x1, int x2, int x3, int x4, int* x5, int* x6){
    if (x1 <= x2)                               //]                            
   {        *x5 = min(x1, x3);                  //]    
            *x6 = max(x2, x4);                  //]   aici aflam minimul dintre numerele din stanga ale intervalelor si                       
   }                                            //]   maximul dintre partile din dreapta
        else                                    //]                          
   {                                            //] 
       *x5 = x3;                                //]   aici este tratat cazul multimii vide
       *x6 = x4;                                //]
   }
   

}
int main()
{int n, a1, b1, a2, b2, a, b, k, z, v[20], i, p, j;

scanf("%d", &n); // numarul de interogari

for (i = 1; i <= n; i++){                   // parcurgerea interogarilor
    scanf("%d", &k);                        // tipul interogarii
    if(k == 1)                              // testarea interogarii ( daca este simpla - 1 sau compusa - 2)
    {   scanf("%d%d%d%d%d", &z, &a1, &b1, &a2, &b2);            //citirea tipului de operatie dar si aintervalelor
        if (z == 1){
            intersectie(a1, b1, a2, b2, &a, &b);        // apelarea funtie de intersectie pe intervalele citie
            if (a > b)                                  // tratarea cazului pentru multimea vida   
                    printf("0\n");                      // afisarea caracterului "0" daca cele doua intervale nu se intersecteaza    
                else
                    printf("%d %d\n", a, b);            //afisarea intervalului obtinut dupa apelarea functiei de intersectie anterioare
        }else{
            reuniune(a1, b1, a2, b2, &a, &b);           // apelarea functiei de reuniune pt intervalele citite anterior
            printf("%d %d\n",a, b);                     //afisarea intervalului obtinut dupa apelarea functiei de reuniune anterioare
        }            
    }else{                                      //else in caz de a fost dorita o interogare compusa
        scanf("%d", &p);                        //citirea numarului de operatii
        
        for(j = 1; j <= p; j++)                     //]stocarea acestora intr-un vector
            scanf("%d", &v[j]);                     //]

        scanf("%d%d", &a1, &b1);                    // citirea primului interval
        
        for (j = 1; j <= p; j++){

            scanf("%d%d", &a2, &b2);                //citirea celui de al doilea
            
            if (v[j] == 1){
               
                intersectie(a1, b1, a2, b2, &a, &b);            // apelarea functiei de intersectie pt intervalele citite anterior
              
            }
            else{
                
                reuniune(a1, b1, a2, b2, &a, &b);               // apelarea functiei de reuniune pt intervalele citite anterior
            
            }

            a1 = a;                     //] pastrarea in primu interval a numerelor rezultate dupa functii
            b1 = b;                     //]
         
        }
    
    
        if (a > b)
                printf("0\n");                      // afisarea lui "0" pentru multimea vida
             else 
                printf("%d %d\n",a, b);             // afisarea intervalului in caz contrar 

    }
 
}



return 0;
}
