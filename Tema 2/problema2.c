#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Struct-ul dat
struct pereche
{
  char *camp, *valoare;
};

// Functia test unde verificam daca "cuvant" a fost gasit in v[i].camp
void test(int ok, char s1[], char s2[])
{ // Verificam valoarea lui ok
  if (ok == 0)
  { // Daca acesta este 0 dam print la s1 (sirul "cuvant")
    printf("%s", s1);
  }
  else
  {
    // Daca acesta este 1 dam print la s2 (v[z].valoare)
    printf("%s", s2);
  }
}

int main()
{ // Declararea variabilelor
  int i, nr, k, u = 0, p = 0, ok, z;
  struct pereche *v;
  char *aux1, *aux2, *sir, str[20000], cuvant[50];
  v = malloc(20000 * sizeof(struct pereche));
  aux1 = malloc(20000 * sizeof(char));
  aux2 = malloc(20000 * sizeof(char));
  sir = malloc(20000 * sizeof(char));

  // Citire nr
  scanf("%d ", &nr);

  // Am observat ca la 4 nr=0 deci o sa dam print la sir fara a modifica ceva
  if (nr == 0)
  {
    fgets(sir, 20000, stdin);
    strcpy(str, sir);
    printf("%s", str);
    return 0;
  }

  // For pentru salvarea elementelor in v[i].cam si v[i].valoare folosind 2 aux
  for (i = 1; i <= nr; i++)
  {
    scanf("%s%s ", aux1, aux2);
    v[i].camp = malloc(20000 * sizeof(char));
    v[i].valoare = malloc(20000 * sizeof(char));
    strcpy(v[i].camp, aux1);
    strcpy(v[i].valoare, aux2);
  }

  // Citirea sirului care trebuie sa fie modificat cu autofill
  fgets(sir, 20000, stdin);
  strcpy(str, sir);

  // Urmatorul while lucreaza pe sir prin cu 2 variabile u si p
  // p este folosit pentru a retine primul caracter dintr-un cuvant
  // in schimb u retine ultimul caracter dintr-un cuvant
  while (u < strlen(str) && str[u] != '\0')
  {
    while((strchr(" ,.?!;",str[u])==NULL)&&(u<=strlen(str)-1&&str[u]!='\0'))
      u++;
    u--;
    // Aici u este pus pe ultimul caracter al cuvantului

    // Acum inmagazinam literele dintre p si u intr-un sir numit "cuvant"
    k = 0;
    strcpy(cuvant, "");
    for (i = p; i <= u; i++)
    {
      cuvant[k] = str[i];
      k++;
    }
    cuvant[k] = '\0';
    // Aici comparam sirul "cuvant" cu toate din v[i].camp
    ok = 0;
    for (i = 1; i <= nr; i++)
      if (strcmp(cuvant, v[i].camp) == 0)
      { // Aici ok se face 1 in caz de am gasit sirul "cuvant" in v[i].camp
        // iar z ii pastreaza pozitia lui i ca sa putem sa accesam v[z].valoare
        ok = 1;
        z = i;
      }
    // Apelarea funtiei de test pentru a afisa sirul "cuvant" sau v[z].valoare
    test(ok, cuvant, v[z].valoare);

    // u creste si ii da pozitia lui p
    u++;
    p = u;
    // In acest while facem rost de toti delimitatorii ca sa le dam print
    while((strchr(",. ?!;",str[u]))&&(u<=strlen(str)-1&&str[u]!='\0'))
      u++;
    // u se pune pe ultima pozitie cu delimitator
    u--;
    // Iar aici dam print la delimitatorii aflati inte p si u
    for (i = p; i <= u; i++)
      printf("%c", str[i]);

    // u se pune pe poz primului caracter din noul cuvant iar p ii ia valoare
    u++;
    p = u;
  }
  return 0;
}