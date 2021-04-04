#include <stdio.h>

typedef struct entry
{
    void *key;
    void *value;
} entry;

typedef struct map
{
    entry **elem; // vectorul de elemente; este alocat si realocat dinamic
    int n_elem;   // numarul de elemente din vector
    int cap;      // capacitatea vectorului
} map;

//  Funcţia ce compară între ele 2 structuri entry* ţinând cont de faptul că în acest caz particular cheia va fi char *. Funcţia de comparare nu trebuie să ţină cont şi de valorile asociate.
int compareEntry(const void *, const void *);

// Funcţie ce compară 2 chei (în cazul de faţă, 2 şiruri de caractere). Funcţia va apela _strcmp_.
int compareKey(const void *, const void *);

// Funcţie ce afişează cheia şi valoarea asociată pe cazul particular când sunt şiruri de caractere.
void printEntry(const entry *);
// aloca initial memorie pentru cap elemente de tip entry*
void init(map *m, int cap);

// adauga la vectorul de elemente din m noua intrare (pointerul primit) si eventual realoca pe m->elem OBS: se considera ca nu se adauga chei duplicate!
void add(map *m, entry *e);

// afiseaza pe m folosind functia pentru afisarea unui entry primita ca parametru
void print(map *m, void (*printEntry)(const entry *));

// sorteaza elementele din m folosind functia primita ca parametru si functia de biblioteca qsort. Observatie: fc va trebui sa compare între ele 2 structuri entry* (se va face conversie la entry ** in functia de comparatie!! DE CE?)
void sort(map *m, int (*fc)(const void *, const void *));

// sterge intrarea corespunzatoare cheii k din m. Atentie! Nu veti compara pointerii pentru a testa daca 2 elemente sunt egale, ci veti folosi functia primita ca parametru, ce se considera ca întoarce 0 pentru elemente egale. Observatie: fc2 va trebui sa compare între ele 2 chei (void *).
void del(map *m, void *k, int (*fc2)(const void *, const void *));

// functie ce întoarce valoarea asociata unei chei. Se va folosi functia bsearch! Observatie: fc va trebui sa compare între ele 2 structuri entry* (se va face conversie la entry ** in functia de comparatie!! DE CE?). Vectorul tb sortat in prealabil! Dar, atentie el nu tb sa iasa modificat, se va lucra pe o copie a lui!
void *find(map *m, void *k, int (*fc)(const void *, const void *));

int main(void)
{
    int num;
    printf("1. - Afisare dictionar.\n2. - Cauta cuvant in dictionar. \n3. - Adauga cuvant in dictionar. \n4. - Sterge cuvant din dictionar.\n5. - Sortare dictionar\n6. - Iesire din program");
    scanf("%d", &num) switch (num)
    {
    case 1:
        printf("Value is 7");
        break;
    case 2:
        printf("Value is 8");
        break;
    case 3:
        printf("Value is 9");
        break;
    case 4:
        printf("Value is 9");
        break;
    case 5:
        printf("Value is 9");
        break;
    case 6:
        printf("Value is 9");
        break;
    default:
        printf("Out of range");
        break;
    }
}