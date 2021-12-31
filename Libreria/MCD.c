// Scrivere la miglior versione possibile della funzione MCD (per due numeri interi) tramite l'algoritmo di Euclide in modo iterativo e in modo ricorsivo. Realizzare anche un programma di testing.

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

    if(b == 0)
    {
        return a;
    }
    else if(a != 0 && b != 0)
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
// ==============================
//         MCD ricorsivo
// ==============================
int mcd_ricorsivo(int a, int b)
{
    if(b == 0)
    {
        return a;
    }
    else if(a != 0 && b != 0)
    {
        return mcd_ricorsivo(b, a % b);
    }
}