#include <stdio.h>

// ==============================
//          FUNZIONI
// ==============================
int Fibonacci(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else if(n>1)
    {
        return Fibonacci(n-1)+Fibonacci(n-2);
    }
}

int funzione_ricorsiva(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    else if(n>1)
    {
        return (Fibonacci(n)+(funzione_ricorsiva(n-1)))/2;
    }
}

int funzione_iterativa(int n)
{
    float a=0.0;
    
    if(n==0 || n==1)
    {
        return n;
    }
    else if(n>1)
    {
        for(int i=2; i<n; i=i+1)
        {
            a=a+((Fibonacci(i)+(i-1))/2);
        }
        return a;
    }
}

// ==============================
//          PROGRAMMA
// ==============================
//      Corpo del programma
// ==============================
int main(int arg, char **argv)
{
    int n;
    printf("Inserire il valore di n: ");
    scanf("%d", &n);
    
    printf("Il risultato di Fibonacci per n=%d è: %d\n", n, Fibonacci(n));
    printf("Il risultato della funzione ricorsiva per n=%d è: %d\n", n, funzione_ricorsiva(n));
    printf("Il risultato della funzione iterativa per n=%d è: %d\n", n, funzione_iterativa(n));
}