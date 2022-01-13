// Si consideri la seguente serie geometrica: (*Vedere comando esercizio*), dove x è un valore scelto dall’utente. Verificare che la serie equivale a: (*Vedere comando esercizio*).

// ==============================
//           LIBRERIA
// ==============================
#include <stdio.h>

// ==============================
//           FUNZIONI
// ==============================
//        Potenza iterativa
// ==============================
float potenza_iterativa(int base, int esponente);
// ==============================
//        Potenza ricorsiva
// ==============================
float potenza_ricorsiva(int base, int esponente);
// ==============================
//        Serie iterativa
// ==============================
float serie_iterativa(float x, int n);
// ==============================
//        Serie ricorsiva
// ==============================
float serie_ricorsiva(float x, int n);

// ==============================
//           PROGRAMMA
// ==============================
//      Corpo del programma
// ==============================
int main(void)
{
    // Dichiarazione delle variabili
    int n;
    float x;

    printf("Inserire il valore di x: ");
    scanf("%f", &x);
    printf("Inserire il valore di n: ");
    scanf("%d", &n);
    
    if(n < 0)
    {
        printf("Valore di n inaccettabile. Il valore di n deve essere maggiore o uguale a zero");
    }
    else if(n >= 0)
    {
        // Richiamo delle funzioni serie iterativa e ricorsiva
        printf("Valore iterativo/ricorsivo della serie per x = %f e n = %d: %f/%f\n", x, n, serie_iterativa(x, n), serie_ricorsiva(x, n));
    }
}

// ==============================
//           FUNZIONI
// ==============================
//        Potenza iterativa
// ==============================
float potenza_iterativa(int base, int esponente)
{
    float potenza = 0;
    
    if(esponente < 0)
    {
        for(int i = 0; i > esponente; i = i - 1)
        {
            if(i == 0)
            {
                potenza = 1.0;
            }
            potenza = (potenza * base);
        }
        return 1 / potenza;
    }
    else if(esponente == 0)
    {
        return potenza = 1;
    }
    else if(esponente > 0)
    {
       for(int i = 0; i < esponente; i = i + 1)
       {
            if(i == 0)
            {
                potenza = 1;
            }
            potenza = (potenza * base);
        }
        return potenza; 
    }
}
// ==============================
//        Potenza ricorsiva
// ==============================
float potenza_ricorsiva(int base, int esponente)
{
    if(esponente < 0)
    {
        return 1/(base * potenza_ricorsiva(base, ((esponente * (- 1))-1)));
    }
    else if(esponente == 0)
    {
        return 1;
    }
    else if(esponente == 1)
    {
        return base;
    }
    else if(esponente > 1)
    {
        return base * potenza_ricorsiva(base, esponente - 1);
    }
}
// ==============================
//        Serie iterativa
// ==============================
float serie_iterativa(float x, int n)
{
    float serie = 1.0;

    for(int i = 1; i <= n; i = i + 1)
    {
        serie = serie + potenza_iterativa(x, i);
    }
    return serie;
}
// ==============================
//        Serie ricorsiva
// ==============================
float serie_ricorsiva(float x, int n)
{
    if(n == 0)
    {
        return 1;
    }
    else if(n == 1)
    {
        return 1 + x;
    }
    else if(n > 1)
    {
        return potenza_ricorsiva(x, n) + serie_ricorsiva(x, n - 1);
    }
}