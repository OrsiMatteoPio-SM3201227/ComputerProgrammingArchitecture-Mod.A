// Si scriva un programma per calcolare il valore massimo e minimo di un insieme di n numeri inseriti da tastiera. Il programma deve prima leggere il valore di n dall’utente, ed in seguito leggere una sequenza di n > 0 numeri. A questo punto il programma deve stampare il massimo ed il minimo tra i numeri inseriti.

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
    int n;
    float numero, massimo, minimo;

    printf("Quanti numeri si vuole inserire? ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Non è possibile inserire una quantità negativa di numeri\n");
    }
    else if(n == 0)
    {
        printf("Non è possibile inserire una quantità di numeri pari a 0\n");
    }
    else if(n > 0)
    {
        printf("Inserire il 1° numero: ");
        scanf("%f", &numero);

        minimo = numero;
        massimo = numero;

        for(int i = 2; i <= n; i = i + 1)
        {
            printf("Inserire il %d° numero: ", i);
            scanf("%f", &numero);

            if(numero < minimo)
            {
                minimo = numero;
            }
            else if(numero > massimo)
            {
                massimo = numero;
            }
        }
    }

    // Stampa del numero minimo e del numero massimo
    printf("Il numero minimo inserito è: %f\n", minimo);
    printf("Il numero massimo inserito è: %f\n", massimo);
}