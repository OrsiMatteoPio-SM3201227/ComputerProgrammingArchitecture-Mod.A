// Si realizzi un programma che acquisisca da tastiera un numero x e stampi un messaggio che indichi se tale numero sia positivo oppure negativo, e ne stampi il valore assoluto |x|. Si richiede di risolvere l’esercizio senza alcuna variabile di appoggio.

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
    float x;

    printf("Inserire il valore del numero: ");
    scanf("%f", &x);

    // Controllo del segno e stampa del valore assoluto
    if(x < 0)
    {
        printf("Il numero %f è negativo\n", x);
        printf("Il valore assoluto del numero %f è: %f\n", x, (x * (-1)));
    }
    else if(x == 0)
    {
        printf("Il numero %f è neutro\n", x);
        printf("Il valore assoluto del numero %f è: %f\n", x, x);
    }
    else if(x > 0)
    {
        printf("Il numero %f è positivo\n", x);
        printf("Il valore assoluto del numero %f è: %f\n", x, x);
    }
}