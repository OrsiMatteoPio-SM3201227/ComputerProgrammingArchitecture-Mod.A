// Scrivere la miglior versione possibile della funzione Fibonacci in modo iterativo e in modo ricorsivo. Realizzare anche un programma di testing.

// ==============================
//           LIBRERIA
// ==============================
#include <stdio.h>

// ==============================
//           FUNZIONI
// ==============================
//      Fibonacci iterativo
// ==============================
int Fibonacci_iterativo(int numero);
// ==============================
//      Fibonacci ricorsivo
// ==============================
int Fibonacci_ricorsivo(int numero);

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

    // Richiamo della funzione Fibonacci iterativa
    printf("Secondo la funzione iterativa, l'elemento n°%d della successione di Fibonacci è: %d\n", numero, Fibonacci_iterativo(numero));
    // Richiamo della funzione Fibonacci ricorsiva
    printf("Secondo la funzione ricorsiva, l'elemento n°%d della successione di Fibonacci è: %d\n", numero, Fibonacci_ricorsivo(numero));
}

// ==============================
//           FUNZIONI
// ==============================
//      Fibonacci iterativo
// ==============================
int Fibonacci_iterativo(int numero)
{
    int addendo_1 = 1, addendo_2 = 1, risultato;

    if(numero < 0)
    {
        printf("La successione di Fibonacci non è definita per numeri negativi\n");
        return 0;
    }
    else if(numero == 0)
    {
        return 0;
    }
    else if(numero == 1)
    {
        return 1;
    }
    else if(numero >= 2)
    {
        for(int i = 3; i <= numero; i = i + 1)
        {
            risultato = addendo_1 + addendo_2;
            addendo_1 = addendo_2;
            addendo_2 = risultato;
        }
        return risultato;
    }
}
// ==============================
//      Fibonacci ricorsivo
// ==============================
int Fibonacci_ricorsivo(int numero)
{
    if(numero < 0)
    {
        printf("La successione di Fibonacci non è definita per numeri negativi\n");
        return 0;
    }
    else if(numero == 0)
    {
        return 0;
    }
    else if(numero == 1)
    {
        return 1;
    }
    else if(numero >= 2)
    {
        return Fibonacci_ricorsivo(numero - 1) + Fibonacci_ricorsivo(numero - 2);
    }
}