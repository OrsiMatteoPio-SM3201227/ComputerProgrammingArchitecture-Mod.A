// Dato un numero n ∈ N, n > 0, vogliamo stabilire se sia primo oppure no. • Si implementi la definizione iterativa per il calcolo del predicato n è un numero primo; • Si implementi la definizione ricorsiva per il calcolo del predicato n è un numero primo; • Si crei un programma che testa le due versioni per i valori di input che vanno da 1 a 100 (incluso). Il programma deve stabilire il numero di numeri primi trovati nell’intervallo, e la distanza media tra ciascuno dei numeri primi trovati. Si noti che le due funzioni potrebbero non avere gli stessi argomenti.

// ==============================
//           LIBRERIA
// ==============================
#include <stdio.h>

// ==============================
//           FUNZIONI
// ==============================
//      Numero primo iterativo
// ==============================
int numeroprimo_iterativo(int numero);
// ==============================
//      Numero primo ricorsivo
// ==============================
int numeroprimo_ricorsivo(int numero, int divisore);

// ==============================
//           PROGRAMMA
// ==============================
//      Corpo del programma
// ==============================
int main(void)
{
    // Dichiarazione delle variabili di appoggio e della variabile di conteggio dei numeri primi
    int conto = 0;
    int numero_primo_precedente = 2;
    int distanza = 0.0;
    float distanza_media;
    

    // Richiamo delle funzioni numero primo iterativa e ricorsiva con test per i numeri da 1 a 100
    for(int n = 1; n <= 100; n = n + 1)
    {
        if(numeroprimo_iterativo(n) == 0 && numeroprimo_ricorsivo(n, 1) == 0)
        {    
            printf("Test iterativo/ricorsivo per il numero %d: falso/falso\n", n);
            
        }
        else if(numeroprimo_iterativo(n) == 1 && numeroprimo_ricorsivo(n, 1) == 1)
        {
            printf("Test iterativo/ricorsivo per il numero %d: vero/vero\n", n);
            conto = conto + 1;

            if(n > 2)
            {
                distanza = distanza + (n - numero_primo_precedente);

                numero_primo_precedente = n;
            }
        }
    }

    // Risultato del conteggio dei numeri primi
    printf("Nell'intervallo [1, 100] ci sono %d numeri primi\n", conto);
    
    // Risultato della distanza media tra ciascun numero primo
    distanza_media = distanza / 25.0;
    printf("Nell'intervallo [1, 100] la distanza media tra ciascun numero primo è pari a: %f\n", distanza_media);
}

// ==============================
//           FUNZIONI
// ==============================
//     Numero primo iterativo
// ==============================
int numeroprimo_iterativo(int numero)
{
    // Se divisibile = 0, allora il numero non è un numero primo. Se divisibile = 1, allora il numero è un numero primo.
    int divisibile = 1;
    
    if(numero <= 1)
    {
        return 0;
    }
    else if(numero > 1)
    {
        for(int i = 1; i <= numero; i = i + 1)
        {
            if(numero % i == 0)
            {
                if(i != 1 && i != numero)
                {
                    divisibile = 0;
                }
            }
        }

        if(divisibile == 0)
        {
            return 0;
        }
        else if(divisibile == 1)
        {
            return 1;
        }
    }  
}
// ==============================
//      Numero primo ricorsivo
// ==============================
int numeroprimo_ricorsivo(int numero, int divisore)
{
    if(numero <= 1)
    {
        return 0;
    }
    else if(numero > 1)
    {
        if(numero == 2 || numero == 3)
        {
            return 1;
        }
        else if(numero > 3)
        {
            if(numero % 2 == 0)
            {
                return 0;
            }
            else if(numero % ((2 * divisore)+1) != 0)
            {
                numeroprimo_ricorsivo(numero, divisore +1);
            }
            else
            {
                return 1;
            }
        }
    }
}