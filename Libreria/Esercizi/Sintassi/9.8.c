// Si scriva un programma per calcolare la media aritmetica di una serie di numeri x1, ..., xn inseriti da tastiera, ovvero (*Vedere comando esercizio*). L’introduzione del valore 0 indica il termine del caricamento dei dati.

// ==============================
//           LIBRERIA
// ==============================
#include <stdio.h>

// ==============================
//           PROGRAMMA
// ==============================
//      Corpo del programma
// ==============================
int main(void)
{
    // Dichiarazione delle variabili
    int numero;
    int somma = 0;
    float i = 0.0;
    float media;

    while(numero != 0)
    {
        printf("Inserire un numero: ");
        scanf("%d", &numero);
        somma = somma + numero;

        if(numero != 0)
        {
            i = i + 1;
        }
    }

    // Calcolo della media aritmetica
    media = somma / i;
    printf("La media aritmetica è: %f\n", media);
}