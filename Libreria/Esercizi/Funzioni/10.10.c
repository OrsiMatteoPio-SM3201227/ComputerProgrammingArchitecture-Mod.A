// Dato un numero n ∈ N, n > 0, vogliamo stabilire se sia primo oppure no. • Si implementi la definizione iterativa per il calcolo del predicato n è un numero primo; • Si implementi la definizione ricorsiva per il calcolo del predicato n è un numero primo; • Si crei un programma che testa le due versioni per i valori di input che vanno da 1 a 100 (incluso). Il programma deve stabilire il numero di numeri primi trovati nell’intervallo, e la distanza media tra ciascuno dei numeri primi trovati. Ad esempio, la distanza media tra 1, 3 e 5 vale [(3 − 1) + (5 − 3)]/2. Si noti che le due funzioni potrebbero non avere gli stessi argomenti.

// ==============================
//           LIBRERIA
// ==============================
#include <stdio.h>

// ==============================
//           FUNZIONI
// ==============================
//        Somma analitica
// ==============================
int somma_analitica(int numero);
// ==============================
//        Somma iterativa
// ==============================
int somma_iterativa(int numero);
// ==============================
//        Somma ricorsiva
// ==============================
int somma_ricorsiva(int numero);

// ==============================
//           PROGRAMMA
// ==============================
//      Corpo del programma
// ==============================
int main(void)
{
    // Dichiarazione della variabile di controllo - 0 (falso) e 1 (vero)
    int controllo = 1;

    // Richiamo delle funzioni somma analitica, iterativa e ricorsiva con test per i numeri da 1 a 100
    for(int n = 1; n <= 100; n = n + 1)
    {
        printf("Somma analitica/iterativa/ricorsiva fino a %d: %d/%d/%d\n", n, somma_analitica(n), somma_iterativa(n), somma_ricorsiva(n));

        if(somma_analitica(n) != somma_iterativa(n) || somma_analitica(n) != somma_ricorsiva(n))
        {
            controllo = 0;
        }
    }

    // Risultato del controllo
    if(controllo == 1)
    {
        printf("Le tre funzioni danno sempre lo stesso risultato: vero\n");
    }
    else if(controllo == 0)
    {
        printf("Le tre funzioni danno sempre lo stesso risultato: falso\n");
    }
}

// ==============================
//           FUNZIONI
// ==============================
//        Somma analitica
// ==============================
int somma_analitica(int numero)
{
    return (numero * (numero + 1)) / 2;
}
// ==============================
//        Somma iterativa
// ==============================
int somma_iterativa(int numero)
{
    int sommatoria = 0;
    
    for(int i = 1; i <= numero; i = i + 1)
    {
        sommatoria = sommatoria + i;
    }
    return sommatoria;
}
// ==============================
//        Somma ricorsiva
// ==============================
int somma_ricorsiva(int numero)
{
    if(numero == 0)
    {
        return 0;
    }
    else if(numero > 0)
    {
        return numero + somma_ricorsiva(numero - 1);
    }
}