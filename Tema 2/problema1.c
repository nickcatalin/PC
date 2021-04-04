#include <stdio.h>
#include <string.h>

// Functia pentru verificare existentei caracterelor diferite de litere in sir
int invalid(char sir[])
{
  int i, ok = 0;
  for (i = 0; i < strlen(sir); i++)
    if (((sir[i]>90 && sir[i]<97) || sir[i]<65 || sir[i]>122) && sir[i] != ' ')
    {
      ok = 1;
      break;
    }

  return ok;
}

int main()
{ // Declararea variabilelor
  char key[15000], password[20000], keycopy[20000], s1[120], s2[120], *p;
  int i, nr, z;
  // Doua siruri pentru a afla pozitia caracterelor mai jos in cod
  strcpy(s1, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
  strcpy(s2, "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
  // Concatenez s1 si s2 ca sa nu fie linia mai lunga de 80 de caractere
  strcat(s1, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
  strcat(s2, "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
  
  // Citirea cheii si a parolei care urmeaza sa fie criptata
  scanf("%s%s", key, password);

  // Tratare caz "INVALID" prin apelarea functiei invalid si testand rezultatul
  if (invalid(key) == 1 || invalid(password) == 1)
  { // Afisare "INVALID" in caz de functia a returnat cel putin un "1" 
    printf("INVALID\n");
    // Oprire programului ca acesta sa nu mai faca pasi degeaba
    return 0;
  }
  // Copierea cheii in alta variabila pana aceasta are lungimea egala cu parola
  strcpy(keycopy, key);
  while (strlen(keycopy) < strlen(password))
    strcpy(keycopy + strlen(keycopy), key);
  // Adaugarea caracterului null la sfarsitul cheii formate in while, mai sus
  keycopy[strlen(password)] = '\0';

  // Intrarea in funtia de cripare a parolei
  for (i = 0; i < strlen(password); i++)
  { // Aflare pozitiei in sirul s1 a caracterului keycopy[i]
    p = strchr(s1, keycopy[i]);
    nr = p - s1;

    // If pentru literele mici pe prima ramura si pe else pentru cele mari
    if (password[i] >= 'a')
    { // Aflare pozitiei in sirul s1 a caracterului password[i]
      p = strchr(s1, password[i]);
      z = p - s1;
      // Codificarea caracterului din password[i] cu ajutorul celor doua pozitii
      // prin adunarea lui nr la pozitia lui s1[z]. Nr fiind numarul de 
      // caractere de la 'a' pana la caracterul din  keycopy[i]
      password[i] = s1[z + nr];
    }
    else
    { // Aflare pozitiei in sirul s2 a caracterului password[i]
      p = strchr(s2, password[i]);
      z = p - s2;
      // Codificarea caracterului din password[i] cu ajutorul celor doua pozitii
      // prin adunarea lui nr la pozitia lui s2[z]. Nr fiind numarul de 
      // caractere de la 'a' pana la caracterul din  keycopy[i]
      password[i] = s2[z + nr];
    }
  }
  // Afisarea parolei dupa criptare
  printf("%s\n", password);
}