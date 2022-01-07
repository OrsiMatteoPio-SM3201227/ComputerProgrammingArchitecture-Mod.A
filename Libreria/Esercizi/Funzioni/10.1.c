// Si scriva una funzione che riceva in ingresso tre numeri interi x, y e z, e ne restituisca il minimo. Si crei una funzione di test che prenda in input due dei tre numeri dall’utente, x ed y, e testi la tripletta (x, y, w) con w ∈ [1, max {x, y}]. Nota: per testare la tripletta si intende testare ogni possibile tripla di valori ottenuta fissando x ed y, e variando w.

// ==============================
//           LIBRERIA
// ==============================
#include <stdio.h>

// ==============================
//           FUNZIONI
// ==============================
//            Minimo
// ==============================
int minimo(int x, int y, int z);

// ==============================
//           PROGRAMMA
// ==============================
//      Corpo del programma
// ==============================
int main(void)
{
    // Dichiarazione delle variabili
    int x, y, z;

    printf("Inserire il valore di x: ");
    scanf("%d", &x);
    printf("Inserire il valore di y: ");
    scanf("%d", &y);
    printf("Inserire il valore di z: ");
    scanf("%d", &z);

    // Richiamo della funzione Minimo e stampa del numero minimo
    printf("Il numero minimo tra %d, %d e %d è: %d\n", x, y, z, minimo(x, y, z));

    if(x >= y)
    {
        if(x < 0)
        {
            for(int w = 1; w >= x; w = w - 1)
            {
                printf("Il numero minimo tra %d, %d e %d è: %d\n", x, y, w, minimo(x, y, w));
            }
        }
        else if(x == 0)
        {
            for(int w = 1; w >= 0; w = w - 1)
            {
                printf("Il numero minimo tra %d, %d e %d è: %d\n", x, y, w, minimo(x, y, w));
            }
        }
        else if(x > 0)
        {
            for(int w = 1; w <= x; w = w + 1)
            {
                printf("Il numero minimo tra %d, %d e %d è: %d\n", x, y, w, minimo(x, y, w));
            }
        }
    }
    else if(y >= x)
    {
        if(y < 0)
        {
            for(int w = 1; w >= y; w = w - 1)
            {
                printf("Il numero minimo tra %d, %d e %d è: %d\n", x, y, w, minimo(x, y, w));
            }
        }
        else if(y == 0)
        {
            for(int w = 1; w >= 0; w = w - 1)
            {
                printf("Il numero minimo tra %d, %d e %d è: %d\n", x, y, w, minimo(x, y, w));
            }
        }
        else if(y > 0)
        {
            for(int w = 1; w <= y; w = w + 1)
            {
                printf("Il numero minimo tra %d, %d e %d è: %d\n", x, y, w, minimo(x, y, w));
            }
        }
    }
}

// ==============================
//           FUNZIONI
// ==============================
//            Minimo
// ==============================
int minimo(int x, int y, int z)
{
    if(x < y && x < z)
    {
        return x;
    }
    else if(y < x && y < z)
    {
        return y;
    }
    else if(z < x && z < y)
    {
        return z;
    }
}