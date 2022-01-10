// Dato un numero n ∈ N espresso come sequenza di w > 0 cifre n ≡ c1c2c3c4...cw, si definisca la quantità (*Vedere comando esercizio*). • Si implementi la definizione iterativa per il calcolo di d; • Si implementi la definizione ricorsiva per il calcolo di d; • Si crei un programma che testa le due versioni per i valori di input che vanno da 1 a 1000 (incluso). Il programma deve stabilire quale numero ha il valore di d associato più alto, e stampare un messaggio adeguato.

// ==============================
//           LIBRERIA
// ==============================
#include <stdio.h>

// ==============================
//           FUNZIONI
// ==============================
//     Somma cifre iterativa
// ==============================
int somma_cifre_iterativa(int numero);
// ==============================
//     Somma cifre ricorsiva
// ==============================
int somma_cifre_ricorsiva(int numero);

// ==============================
//           PROGRAMMA
// ==============================
//      Corpo del programma
// ==============================
int main(void)
{
    // Dichiarazione della variabile d
    int valore_massimo_iterativo = 0;
    int numero_massimo_iterativo, numero_massimo_ricorsivo;
    int valore_massimo_ricorsivo = 0;

    // Richiamo delle funzioni somma cifre iterativa e ricorsiva con test per i numeri da 1 a 1000
    for(int n = 1; n <= 1000; n = n + 1)
    {
        printf("Somma iterativa/ricorsiva delle cifre del numero %d: %d/%d\n", n, somma_cifre_iterativa(n), somma_cifre_ricorsiva(n));

        if(somma_cifre_iterativa(n) > valore_massimo_iterativo)
        {
            valore_massimo_iterativo = somma_cifre_iterativa(n);
            numero_massimo_iterativo = n;
        }

        if(somma_cifre_ricorsiva(n) > valore_massimo_ricorsivo)
        {
            valore_massimo_ricorsivo = somma_cifre_ricorsiva(n);
            numero_massimo_ricorsivo = n;
        }
    }

    // Risultato del controllo dei valori massimi per le funzioni somma cifre iterativa e ricorsiva
    printf("Secondo la funzione iterativa, il valore massimo della somma delle cifre è %d per il numero %d\n", valore_massimo_iterativo, numero_massimo_iterativo);
    printf("Secondo la funzione ricorsiva, il valore massimo della somma delle cifre è %d per il numero %d\n", valore_massimo_ricorsivo, numero_massimo_ricorsivo);
}

// ==============================
//           FUNZIONI
// ==============================
//     Somma cifre iterativa
// ==============================
int somma_cifre_iterativa(int numero)
{
    int d = 0;

    if(numero < 0)
    {
        printf("Il numero è negativo, dunque d'ora in poi si considererà il suo opposto positivo\n");

        numero = numero * (-1);

        while(numero != 0)
        {
            d = d + (numero % 10);
            numero = numero / 10;
        }
        return d;
    }
    else if(numero >= 0)
    {
        while(numero != 0)
        {
            d = d + (numero % 10);
            numero = numero / 10;
        }
        return d;
    } 
}
// ==============================
//     Somma cifre ricorsiva
// ==============================
int somma_cifre_ricorsiva(int numero)
{
    if(numero < 0)
    {
        printf("Il numero è negativo, dunque d'ora in poi si considererà il suo opposto positivo\n");

        numero = numero * (-1);

        return (numero % 10) + somma_cifre_ricorsiva(numero / 10);
    }
    else if(numero >= 0)
    {
        if(numero < 10)
        {
            return numero;
        }
        else if(numero >= 10)
        {
            return (numero % 10) + somma_cifre_ricorsiva(numero / 10);
        }
    }
}