// Si implementi una funzione che calcola la seguente successione fino al termine n-esimo: (*Vedere comando esercizio*). Verificare che il limite della successione è 1.

// ==============================
//           LIBRERIA
// ==============================
#include <stdio.h>

// ==============================
//           FUNZIONI
// ==============================
//     Successione iterativa
// ==============================
float successione_iterativa(int n);
// ==============================
//     Successione ricorsiva
// ==============================
float successione_ricorsiva(int n);

// ==============================
//           PROGRAMMA
// ==============================
//      Corpo del programma
// ==============================
int main(void)
{
    // Dichiarazione delle variabili
    int n;

    printf("Inserire il valore di n: ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Valore inaccettabile. Il valore di n deve essere positivo\n");
    }
    else if(n > 0)
    {
        // Richiamo delle funzioni successione iterativa e ricorsiva
        printf("Valore iterativo/ricorsivo della successione per n = %d: %f/%f\n", n, successione_iterativa(n), successione_ricorsiva(n));
    }
}

// ==============================
//           FUNZIONI
// ==============================
//     Successione iterativa
// ==============================
float successione_iterativa(int n)
{
    float successione = 0.5;

    for(int i = 2; i <= n; i = i + 1)
    {
        successione = (successione + 1) / 2.0;
    }
    return successione;
}
// ==============================
//     Successione ricorsiva
// ==============================
float successione_ricorsiva(int n)
{
    if(n == 1)
    {
        return 1 / 2.0;
    }
    else if(n > 1)
    {
        return (successione_ricorsiva(n - 1) + 1) / 2.0;
    }
}