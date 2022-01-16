// Si scriva una funzione che legga un array di lunghezza arbitraria e determini se l’array contiene solo valori diversi, o no.

// ==============================
//           LIBRERIA
// ==============================
#include <stdio.h>
#include <stdlib.h>

// ==============================
//           FUNZIONI
// ==============================
//     Controllo uguaglianza
// ==============================
void controllo_uguaglianza(float a[], int dimensione);

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

    float * a = malloc(sizeof(float) * dimensione);

    for(int i = 0; i < dimensione; i = i + 1)
    {
        printf("Inserire il %d° numero nella posizione d'indice %d dell'array: ", i + 1, i);
        scanf("%f", &a[i]);
    }

    // Richiamo della funzione controllo uguaglianza dei valori dell'array
    controllo_uguaglianza(a, dimensione);

    // Pulizia dell'heap
    free(a);
}

// ==============================
//           FUNZIONI
// ==============================
//     Controllo uguaglianza
// ==============================
void controllo_uguaglianza(float a[], int dimensione)
{
    // Dichiarazione della variabile controllo - 0 se vi è almeno una ricorrenza di un valore, 1 se i valori sono tutti diversi
    int controllo = 1;

    for(int i = 0; i < dimensione; i = i + 1)
    {
        for(int k = 0; k < dimensione; k = k + 1)
        {
            if(a[i] == a[k] && i != k)
            {
                controllo = 0;
            }
        }
    }

    if(controllo == 0)
    {
        printf("L'array contiene valori uguali\n");
    }
    else if(controllo == 1)
    {
        printf("L'array contiene valori diversi\n");
    }
}