// Secondo il linguaggio C, a[0] equivale in realtà a scrivere *(a+0). Si scriva un programma che stampi tutti gli elementi di un array usando la seconda notazione.

// ==============================
//           LIBRERIA
// ==============================
#include <stdio.h>
#include <stdlib.h>

// ==============================
//           FUNZIONI
// ==============================
//            Stampa
// ==============================
void stampa(int a[], int dimensione);

// ==============================
//           PROGRAMMA
// ==============================
//      Corpo del programma
// ==============================
int main(void)
{
    // Dichiarazione della variabile dimensione e allocazione dinamica di un array di interi
    int dimensione;

    printf("Inserire il valore della dimensione dell'array: ");
    scanf("%d", &dimensione);

    int * a = malloc(sizeof(int) * dimensione);

    for(int i = 0; i < dimensione; i = i + 1)
    {
        printf("Inserire il %d° numero intero nella posizione d'indice %d dell'array: ", i + 1, i);
        scanf("%d", &a[i]);
    }

    // Richiamo della funzione stampa
    stampa(a, dimensione);

    // Pulizia dell'heap
    free(a);
}

// ==============================
//           FUNZIONI
// ==============================
//            Stampa
// ==============================
void stampa(int a[], int dimensione)
{
    for(int i = 0; i < dimensione; i = i + 1)
    {
        printf("Stampa con *(a + i) - L'elemento nella posizione d'indice %d dell'array è: %d\n", i, * (a + i));
        printf("Stampa con a[i] - L'elemento nella posizione d'indice %d dell'array è: %d\n", i, a[i]);
    }
}