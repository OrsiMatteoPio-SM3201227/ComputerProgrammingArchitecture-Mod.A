// Scrivere la miglior versione possibile della funzione fattoriale (per numeri interi positivi) in modo iterativo e in modo ricorsivo. Realizzare anche un programma di testing.

// ==============================
//           LIBRERIA
// ==============================
#include <stdio.h>

// ==============================
//           FUNZIONI
// ==============================
//      Fattoriale iterativo
// ==============================
int fattoriale_iterativo(int numero);
// ==============================
//      Fattoriale ricorsivo
// ==============================
int fattoriale_ricorsivo(int numero);

// ==============================
//           PROGRAMMA
// ==============================
//      Corpo del programma
// ==============================
int main(void)
{
    // Dichiarazione della variabile
    int numero;

    printf("Inserire il valore del numero: ");
    scanf("%d", &numero);

    // Richiamo della funzione fattoriale iterativa
    printf("Secondo la funzione iterativa, il fattoriale del numero %d è: %d\n", numero, fattoriale_iterativo(numero));
    // Richiamo della funzione fattoriale ricorsiva
    printf("Secondo la funzione ricorsiva, il fattoriale del numero %d è: %d\n", numero, fattoriale_ricorsivo(numero));
}

// ==============================
//           FUNZIONI
// ==============================
//      Fattoriale iterativo
// ==============================
int fattoriale_iterativo(int numero)
{
    int fattoriale = 2;
    
    if(numero < 0)
    {
        printf("Non è possibile calcolare il fattoriale di un numero negativo\n");
        return 0;
    }
    else if(numero == 0 || numero == 1)
    {
        return fattoriale = 1;
    }
    else if(numero > 1)
    {
        for(int i = 2; i < numero; i = i + 1)
        {
            fattoriale = fattoriale + (fattoriale * i);
        }
        return fattoriale;
    }
}
// ==============================
//      Fattoriale ricorsivo
// ==============================
int fattoriale_ricorsivo(int numero)
{    
    if(numero < 0)
    {
        printf("Non è possibile calcolare il fattoriale di un numero negativo\n");
        return 0;
    }
    else if(numero == 0)
    {
        return 1;
    }
    else if(numero > 0)
    {
        numero = numero * fattoriale_ricorsivo(numero - 1);
        return numero;
    }
}