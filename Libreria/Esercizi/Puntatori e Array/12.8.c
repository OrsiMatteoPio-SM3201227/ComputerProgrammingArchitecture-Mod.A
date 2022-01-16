// Si scriva una funzione che prenda in input tre array A1, A2 ed A3, della stessa dimensione. La funzione per ogni i calcola la somma tra A1[i] ed A2[i], e ne salva il risultato in A3[i]. Scrivere un main che inizializzi i due vettori A1 e A2, invochi la funzione di somma ed infine stampi il contenuto di A3. Nella funzione si richiede di utilizzare il passaggio di parametri per indirizzo.

// ==============================
//           LIBRERIA
// ==============================
#include <stdio.h>
#include <stdlib.h>

// ==============================
//           FUNZIONI
// ==============================
//         Somma di array
// ==============================
float * somma_array(float * a, float * b, float * somma, int dimensione);

// ==============================
//           PROGRAMMA
// ==============================
//      Corpo del programma
// ==============================
int main(void)
{
    // Dichiarazione della variabile dimensione e allocazione dinamica di tre array di float
    int dimensione;

    printf("Inserire il valore della dimensione degli array: ");
    scanf("%d", &dimensione);

    float * a = malloc(sizeof(float) * dimensione);
    float * b = malloc(sizeof(float) * dimensione);
    float * somma = malloc(sizeof(float) * dimensione);

    for(int i = 0; i < dimensione; i = i + 1)
    {
        printf("Inserire il %d° numero nella posizione d'indice %d dell'array a[]: ", i + 1, i);
        scanf("%f", &a[i]);
        printf("Inserire il %d° numero nella posizione d'indice %d dell'array b[]: ", i + 1, i);
        scanf("%f", &b[i]);
    }

    // Richiamo della funzione somma degli array e salvataggio dell'array somma
    somma = somma_array(a, b, somma, dimensione);
    for(int i = 0; i < dimensione; i = i + 1)
    {
        printf("L'elemento nella posizione d'indice %d dell'array somma[] è: %f\n", i, somma[i]);
    }
}

// ==============================
//           FUNZIONI
// ==============================
//        Somma di array
// ==============================
float * somma_array(float * a, float * b, float * somma, int dimensione)
{
    for(int i = 0; i < dimensione; i = i + 1)
    {
        somma[i] = a[i] + b[i];
    }
    return somma;
}