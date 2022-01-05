// Si scriva un programma che legga due numeri da tastiera, detti a e b, e determini le seguenti informazioni, stampandole a video: • se b è un numero positivo o negativo; • se a è un numero pari o dispari; • il valore di a + b; • quale scelta dei segni dell’espressione ±a + ±b porta al risultato massimo, e quale è questo valore. Suggerimento: il valore massimo della somma di a e b si può ottenere sommando il valore assoluto di a ed il valore assoluto di b.

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
    int a, b;
    int somma, massimo, valore_assoluto_a, valore_assoluto_b;

    printf("Inserire il valore del primo numero: ");
    scanf("%d", &a);
    printf("Inserire il valore del secondo numero: ");
    scanf("%d", &b);

    // Controllo del segno di b
    if(b < 0)
    {
        printf("Il numero %d è negativo\n", b);
    }
    else if(b == 0)
    {
        printf("Il numero %d è neutro\n", b);
    }
    else if(b > 0)
    {
        printf("Il numero %d è positivo\n", b);
    }

    // Controllo della parità o disparità di a
    if(a % 2 == 0)
    {
        printf("Il numero %d è pari\n", a);
    }
    else
    {
        printf("Il numero %d è dispari\n", a);
    }

    // Calcolo della somma
    somma = a + b;
    printf("La somma dei numeri %d e %d è: %d\n", a, b, somma);

    // Calcolo del valore massimo
    if(a < 0)
    {
        valore_assoluto_a = a * (-1);
    }
    else if(a >= 0)
    {
        valore_assoluto_a = a;
    }

    if(b < 0)
    {
        valore_assoluto_b = b * (-1);
    }
    else if(b >= 0)
    {
        valore_assoluto_b = b;
    }

    massimo = valore_assoluto_a + valore_assoluto_b;
    printf("Il valore massimo della somma ±(%d) + ±(%d) si ottiene con entrambi i numeri positivi. Il valore massimo della somma ±(%d) + ±(%d) è: %d\n", a, b, a, b, a, b, massimo);
}