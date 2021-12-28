// Scrivere la miglior versione possibile della funzione potenza (per base ed esponente intero) in modo iterativo e in modo ricorsivo. Realizzare anche un programma di testing.

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
//           PROGRAMMA
// ==============================
//      Corpo del programma
// ==============================
int main(void)
{
    // Dichiarazione delle variabili
    int base, esponente;

    printf("Inserire il valore della base: ");
    scanf("%d", &base);
    printf("Inserire il valore dell'esponente: ");
    scanf("%d", &esponente);

    // Richiamo della funzione potenza iterativa
    printf("Secondo la funzione iterativa, la potenza della base %d per l'esponente %d è: %f\n", base, esponente, potenza_iterativa(base, esponente));
    // Richiamo della funzione potenza ricorsiva
    printf("Secondo la funzione ricorsiva, la potenza della base %d per l'esponente %d è: %f\n", base, esponente, potenza_ricorsiva(base, esponente));
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
    else if(esponente > 0)
    {
        return base * potenza_ricorsiva(base, esponente - 1);
    }
}