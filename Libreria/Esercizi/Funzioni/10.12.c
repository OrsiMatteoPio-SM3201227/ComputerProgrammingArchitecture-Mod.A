// Si consideri la definizione di Minimo Comune Multiplo(mcm). Si scriva una funzione ricorsiva mcm(a,b) per il calcolo dell’MCM a partire da due valori a, b > 0 ed interi. La si verifichi tenendo conto che mcm(a,b)=ab/mcd(a,b) con numeri dati in input dall’utente, dove mcd é la funzione definita nell'esercizio precedente.

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
//         MCM iterativo
// ==============================
int mcm_iterativo(int a, int b);
// ==============================
//         MCM ricorsivo
// ==============================
int mcm_ricorsivo(int a, int b);

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
    printf("Secondo la funzione iterativa, il MCM tra i numeri %d e %d è: %d\n", a, b, mcm_iterativo(a, b));
    // Richiamo della funzione fattoriale ricorsiva
    printf("Secondo la funzione ricorsiva, il MCM tra i numeri %d e %d è: %d\n", a, b, mcm_ricorsivo(a, b));
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
// ==============================
//         MCM iterativo
// ==============================
int mcm_iterativo(int a, int b)
{
    if(a == 0 || b == 0)
    {
        return 0;
    }
    else if(a != 0 && b != 0)
    {
        return (a * b) / mcd_iterativo(a, b);
    }
}
// ==============================
//         MCM ricorsivo
// ==============================
int mcm_ricorsivo(int a, int b)
{   
    if(a == 0 || b == 0)
    {
        return 0;
    }
    else if(a != 0 && b != 0)
    {
        return (a * b) / mcd_ricorsivo(a, b);
    }
}