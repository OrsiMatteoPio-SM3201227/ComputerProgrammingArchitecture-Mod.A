// Si scriva una funzione che prenda in input un array di interi e restituisca la varianza (*Vedere comando esercizio*) degli n elementi in esso contenuti; nella formula xi è l'elemento i-esimo dell'array mentre µ è la media degli elementi dell'array. Richiesta: La segnatura della funziona sarà float var(int a[], int n).

// ==============================
//           LIBRERIA
// ==============================
#include <stdio.h>
#include <stdlib.h>

// ==============================
//           FUNZIONI
// ==============================
//           Varianza
// ==============================
float var(int a[], int n);
// ==============================
//             Media
// ==============================
float avg(int a[], int n);

// ==============================
//           PROGRAMMA
// ==============================
//      Corpo del programma
// ==============================
int main(void)
{
    // Dichiarazione della variabile per l'allocazione dinamica di un array di interi
    int dimensione;

    printf("Inserire il valore della dimensione dell'array: ");
    scanf("%d", &dimensione);

    int * a = malloc(sizeof(int) * dimensione);

    for(int i = 0; i < dimensione; i = i + 1)
    {
        printf("Inserire il %d numero intero dell'array d'indice %d: ", i + 1, i);
        scanf("%d", &a[i]);
    }

    printf("La varianza dell'array è: %f\n", var(a, dimensione));

    free(a);
}

// ==============================
//           FUNZIONI
// ==============================
//           Varianza
// ==============================
float var(int a[], int n)
{
    float sommatoria = 0;
    float media = avg(a, n);

    for(int i = 0; i < n; i = i + 1)
    {
        sommatoria = sommatoria + ((a[i] - media) * (a[i] - media));
    }
    return sommatoria / n;
}
// ==============================
//             Media
// ==============================
float avg(int a[], int n)
{
    float sommatoria = 0;

    for(int i = 0; i < n; i = i + 1)
    {
        sommatoria = sommatoria + a[i];
    }
    return sommatoria / n;
}