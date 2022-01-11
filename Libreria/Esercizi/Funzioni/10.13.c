// Si consideri la successione di Fibonacci definita per n > 0 intero. • Si implementi la definizione iterativa per il calcolo di Fn; • Si implementi la definizione ricorsiva per il calcolo di Fn; • Si crei un programma che testa le due versioni per i valori di input che vanno da 1 a 10 (incluso); • Si testino entrambe le funzioni per n = 100, e si provi a spiegare il comprotamento osservato.

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
    // Richiamo delle funzioni Fibonacci iterativa e ricorsiva con test per i numeri da 1 a 10
    for(int n = 1; n <= 10; n = n + 1)
    {
        printf("L'elemento n°%d secondo la funzione Fibonacci iterativa/ricorsiva è: %d/%d\n", n, Fibonacci_iterativo(n), Fibonacci_ricorsivo(n));
    }

    // Richiamo delle funzioni Fibonacci iterativa e ricorsiva con test per il numero 100
    printf("L'elemento n°100 secondo la funzione Fibonacci iterativa/ricorsiva è: %d/%d\n", Fibonacci_iterativo(100), Fibonacci_ricorsivo(100));
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