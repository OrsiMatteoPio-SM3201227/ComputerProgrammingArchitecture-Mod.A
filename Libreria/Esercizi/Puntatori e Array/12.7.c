// Si scriva una funzione che prenda un input un array e permuti i suoi elementi in modo che l’array risulti ordinato in maniera crescente.

// ==============================
//           LIBRERIA
// ==============================
#include <stdio.h>
#include <stdlib.h>

// ==============================
//           FUNZIONI
// ==============================
//      Ordinamento crescente
// ==============================
float * ordinamento_crescente_array(float a[], int dimensione);

// ==============================
//           PROGRAMMA
// ==============================
//      Corpo del programma
// ==============================
int main(void)
{
    // Dichiarazione della variabile dimensione e allocazione dinamica di un array di float
    int dimensione;

    printf("Inserire il valore della dimensione dell'array: ");
    scanf("%d", &dimensione);

    float * a = malloc(sizeof(float) * dimensione);

    for(int i = 0; i < dimensione; i = i + 1)
    {
        printf("Inserire il %d° numero nella posizione d'indice %d dell'array: ", i + 1, i);
        scanf("%f", &a[i]);
    }

    // Richiamo della funzione ordinamento crescente dell'array e salvataggio dell'array ordinato in maniera crescente
    float * array_ordinato = ordinamento_crescente_array(a, dimensione);

    for(int k = 0; k < dimensione; k = k + 1)
    {
        printf("L'elemento nella posizione d'indice %d dell'array ordinato è: %f\n", k, array_ordinato[k]);
    }

    // Pulizia dell'heap
    free(a);
}

// ==============================
//           FUNZIONI
// ==============================
//      Ordinamento crescente
// ==============================
float * ordinamento_crescente_array(float a[], int dimensione)
{
    int indice;
    int variabile_temporanea;
    
    for(int i = 0; i < dimensione; i = i + 1)
    {
        indice = i;
        for(int k = i + 1; k < dimensione; k = k + 1)
        {
            if(a[k] < a[indice])
            {
                indice = k;
            }
        }
        variabile_temporanea = a[indice];  
        a[indice] = a[i];
        a[i] = variabile_temporanea;
    }
    return a;
}