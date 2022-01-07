//  Si scriva una funzione che riceva in ingresso due numeri interi a e b (b > 0) e restituisca il risultato della potenza, in modo iterativo e ricorsivo. Si crei una funzione di test che testa tutte le possibili coppie di valore nell’intervallo [1, 5].

// ==============================
//           LIBRERIA
// ==============================
#include <stdio.h>

// ==============================
//           FUNZIONI
// ==============================
//        Potenza iterativa
// ==============================
float potenza_iterativa(int a, int b);
// ==============================
//        Potenza ricorsiva
// ==============================
float potenza_ricorsiva(int a, int b);

// ==============================
//           PROGRAMMA
// ==============================
//      Corpo del programma
// ==============================
int main(void)
{
    // Dichiarazione delle variabili
    int a, b;

    printf("Inserire il valore della base: ");
    scanf("%d", &a);
    printf("Inserire il valore dell'esponente: ");
    scanf("%d", &b);

    // Richiamo della funzione potenza iterativa
    printf("Secondo la funzione iterativa, la potenza della base %d per l'esponente %d è: %f\n", a, b, potenza_iterativa(a, b));
    // Richiamo della funzione potenza ricorsiva
    printf("Secondo la funzione ricorsiva, la potenza della base %d per l'esponente %d è: %f\n", a, b, potenza_ricorsiva(a, b));

    for(int x = 1; x <= 5; x = x + 1)
    {
        for(int y = 1; y <= 5; y = y + 1)
        {
           // Richiamo della funzione potenza iterativa
            printf("Secondo la funzione iterativa, la potenza della base %d per l'esponente %d è: %f\n", x, y, potenza_iterativa(x, y));
            // Richiamo della funzione potenza ricorsiva
            printf("Secondo la funzione ricorsiva, la potenza della base %d per l'esponente %d è: %f\n", x, y, potenza_ricorsiva(x, y)); 
        }
    }
}

// ==============================
//           FUNZIONI
// ==============================
//        Potenza iterativa
// ==============================
float potenza_iterativa(int a, int b)
{
    float potenza = 0;
    
    if(b < 0)
    {
        for(int i = 0; i > b; i = i - 1)
        {
            if(i == 0)
            {
                potenza = 1.0;
            }
            potenza = (potenza * a);
        }
        return 1 / potenza;
    }
    else if(b == 0)
    {
        return potenza = 1;
    }
    else if(b > 0)
    {
       for(int i = 0; i < b; i = i + 1)
       {
            if(i == 0)
            {
                potenza = 1;
            }
            potenza = (potenza * a);
        }
        return potenza; 
    }
}
// ==============================
//        Potenza ricorsiva
// ==============================
float potenza_ricorsiva(int a, int b)
{
    if(b < 0)
    {
        return 1/(a * potenza_ricorsiva(a, ((b * (- 1))-1)));
    }
    else if(b == 0)
    {
        return 1;
    }
    else if(b == 1)
    {
        return a;
    }
    else if(b > 0)
    {
        return a * potenza_ricorsiva(a, b - 1);
    }
}