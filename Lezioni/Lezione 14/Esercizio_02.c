#include <stdio.h>
#include <stdlib.h>

// --- FUNZIONI ---
//
// Lista
struct elemento{int info; struct elemento*next;};
typedef struct elemento ElementoDiLista;
typedef ElementoDiLista*ListaDiElementi;
// Aggiungi in Coda
void addC(ListaDiElementi*l, int x);

// --- PROGRAMMA PRINCIPALE ---
//
int main(void)
{
    ListaDiElementi lista=NULL;
    addT(&lista, 5);
}

// --- CORPO FUNZIONI ---
//
// Aggiungi in Coda
void addC(ListaDiElementi*l, int x)
{
    
}