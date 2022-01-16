// Si scriva una funzione che riceva in input un array di interi e la sua lunghezza, e restituisca 1 se uno degli elementi contenuti è divisore proprio di tutti gli altri, 0 altrimenti.

// ==============================
//           LIBRERIA
// ==============================
#include <stdio.h>
#include <stdlib.h>

// ==============================
//           FUNZIONI
// ==============================
//  Divisore dei numeri in array
// ==============================
int divisore(int a[], int dimensione);

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
        printf("Inserire il %d° numero nella posizione d'indice %d dell'array: ", i + 1, i);
        scanf("%d", &a[i]);
    }

    // Richiamo della funzione divisore dei numeri in un array
    if(divisore(a, dimensione) == 0)
    {
        printf("Nell'array non vi è alcun elemento divisore proprio di tutti gli altri");
    }
    else if(divisore(a, dimensione) == 1)
    {
        printf("Nell'array vi è almeno un elemento divisore proprio di tutti gli altri\n");
    }
}

// ==============================
//           FUNZIONI
// ==============================
//  Divisore dei numeri in array
// ==============================
int divisore(int a[], int dimensione)
{
    // Dichiarazione della variabile divisione - 0 se non è possibile, 1 se è possibile
    int divisione = 1;

    for(int i = 0; i < dimensione; i = i + 1)
    {
        for(int k = 0; k < dimensione && dimensione != 1; k = k + 1)
        {
            if(a[k] % a[i] != 0)
            {
                divisione = 0;
            }
        }

        if(divisione == 0)
        {
            return 0;
        }
        else if(divisione == 1)
        {
            return 1;
        }
    }
}