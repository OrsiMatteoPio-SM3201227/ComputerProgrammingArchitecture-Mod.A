// Si scriva un programma che legga un valore intero e visualizzi il valore intero precedente e il successivo.

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
    int precedente, successivo;

    printf("Inserire il valore del numero: ");
    scanf("%d", &numero);

    // Calcolo del precedente
    precedente = numero - 1;
    printf("Il precedente del numero %d è: %d\n", numero, precedente);

    // Calcolo del successivo
    successivo = numero + 1;
    printf("Il successivo del numero %d è: %d\n", numero, successivo);
}