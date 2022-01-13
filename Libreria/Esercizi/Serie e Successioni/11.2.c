// Si implementi una funzione che calcola la seguente successione fino al termine n-esimo: (*Vedere comando esercizio*), dove p è un parametro costante della successione. Verificare che il limite della seguente successione è √p.

// ==============================
//           LIBRERIA
// ==============================
#include <stdio.h>

// ==============================
//           FUNZIONI
// ==============================
//      Successione iterativa
// ==============================
float successione_iterativa(int n, int p);
// ==============================
//      Successione ricorsiva
// ==============================
float successione_ricorsiva(int n, int p);

// ==============================
//           PROGRAMMA
// ==============================
//      Corpo del programma
// ==============================
int main(void)
{
    // Dichiarazione delle variabili
    int n, p;

    printf("Inserire il valore di n: ");
    scanf("%d", &n);
    printf("Inserire il valore di p: ");
    scanf("%d", &p);

    if(n <= 0 || p <= 0)
    {
        printf("Valore/i inaccettabile/i. Il valore di n e p deve essere positivo\n");
    }
    else if(n > 0 && p > 0)
    {
        // Richiamo delle funzioni successione iterativa e ricorsiva
        printf("Valore iterativo/ricorsivo della successione per n = %d con parametro p = %d: %f/%f\n", n, p, successione_iterativa(n, p), successione_ricorsiva(n, p));
    }
}

// ==============================
//           FUNZIONI
// ==============================
//      Successione iterativa
// ==============================
float successione_iterativa(int n, int p)
{
    float successione = p;

    for(int i = 2; i <= n; i = i + 1)
    {
        successione = (successione + p / successione) / 2.0;
    }
    return successione;
}
// ==============================
//      Successione ricorsiva
// ==============================
float successione_ricorsiva(int n, int p)
{
    if(n == 1)
    {
        return p;
    }
    else if(n > 1)
    {
        return (successione_ricorsiva((n - 1), p) + p / (successione_ricorsiva((n - 1), p))) / 2.0;
    }
}