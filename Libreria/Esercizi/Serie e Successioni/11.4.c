// Si consideri la seguente serie geometrica: (*Vedere comando esercizio*). Verificare che n −→ ∞ la serie tende a π^2 / 8. Nota: Testare la propria implementazione per valori abbastanza grandi di n; anche se questa non è una prova generale, in questo caso il controllo basta per verificare la convergenza.

// ==============================
//           LIBRERIA
// ==============================
#include <stdio.h>

// ==============================
//           FUNZIONI
// ==============================
//        Serie iterativa
// ==============================
float serie_iterativa(int n);
// ==============================
//        Serie ricorsiva
// ==============================
float serie_ricorsiva(int n);

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
    
    if(n < 0)
    {
        printf("Valore di n inaccettabile. Il valore di n deve essere maggiore o uguale a zero");
    }
    else if(n >= 0)
    {
        // Richiamo delle funzioni serie iterativa e ricorsiva
        printf("Valore iterativo/ricorsivo della serie per n = %d: %f/%f\n", n, serie_iterativa(n), serie_ricorsiva(n));
    }
}

// ==============================
//           FUNZIONI
// ==============================
//        Serie iterativa
// ==============================
float serie_iterativa(int n)
{
    float serie = 1.0;

    for(int k = 1; k <= n; k = k + 1)
    {
        serie = serie + ((1 / ((2.0 * k) + 1.0)) * (1 / ((2.0 * k) + 1.0)));
    }
    return serie;
}
// ==============================
//        Serie ricorsiva
// ==============================
float serie_ricorsiva(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else if(n == 1)
    {
        return 1 + ((1 / ((2.0 * n) + 1.0)) * (1 / ((2.0 * n) + 1.0)));
    }
    else if(n > 1)
    {
        return ((1 / ((2.0 * n) + 1.0)) * (1 / ((2.0 * n) + 1.0))) + serie_ricorsiva(n - 1);
    }
}