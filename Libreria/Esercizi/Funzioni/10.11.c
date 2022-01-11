// Si scriva l’algoritmo di Euclide per il calcolo del MCD utilizzando una definizione ricorsiva mcd(a,b), con a, b > 0 ed interi. Si testi la propria implementazione con numeri dati in input dall’utente, confrontando il risultato ottenuto con la versione iterativa discussa in questa dispensa e vista a lezione.

// ==============================
//           LIBRERIA
// ==============================
#include <stdio.h>

// ==============================
//           FUNZIONI
// ==============================
//         MCD iterativo
// ==============================
int mcd_iterativo(int a, int b);
// ==============================
//         MCD ricorsivo
// ==============================
int mcd_ricorsivo(int a, int b);

// ==============================
//           PROGRAMMA
// ==============================
//      Corpo del programma
// ==============================
int main(void)
{
    // Dichiarazione delle variabili
    int a, b;

    printf("Inserire il valore di a: ");
    scanf("%d", &a);
    printf("Inserire il valore di b: ");
    scanf("%d", &b);

    // Richiamo della funzione fattoriale iterativa
    printf("Secondo la funzione iterativa, il MCD tra i numeri %d e %d è: %d\n", a, b, mcd_iterativo(a, b));
    // Richiamo della funzione fattoriale ricorsiva
    printf("Secondo la funzione ricorsiva, il MCD tra i numeri %d e %d è: %d\n", a, b, mcd_ricorsivo(a, b));
}

// ==============================
//           FUNZIONI
// ==============================
//         MCD iterativo
// ==============================
int mcd_iterativo(int a, int b)
{
    int resto;

    if(a <= 0 || b < 0)
    {
        return 0;
    }
    else if(a > 0 && b >= 0)
    {
        if(b == 0)
        {
            return a;
        }
        else if(a > 0 && b > 0)
        {
            while(b != 0)
            {
                resto = a % b;
                a = b;
                b = resto;
            }
            return a;
        }
    }
}
// ==============================
//         MCD ricorsivo
// ==============================
int mcd_ricorsivo(int a, int b)
{
    if(a < 0 || b < 0)
    {
        return 0;
    }
    else if(a >= 0 && b >= 0)
    {
        if(b == 0)
        {
            return a;
        }
        else if(a > 0 && b > 0)
        {
            return mcd_ricorsivo(b, a % b);
        }
    }
}