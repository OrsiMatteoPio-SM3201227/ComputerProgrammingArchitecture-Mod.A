// Scrivere un programma per calcolare i primi k numeri altamente composti, dove il numero k è definito dall’utente (la scelta della modalità di scrittura è libera).

// ==============================
//           LIBRERIA
// ==============================
#include <stdio.h>

// ==============================
//           FUNZIONI
// ==============================
//     Successione iterativa
// ==============================
void successione_iterativa(int k);

// ==============================
//           PROGRAMMA
// ==============================
//      Corpo del programma
// ==============================
int main(void)
{
    // Dichiarazione delle variabili
    int k;

    printf("Inserire il valore di k: ");
    scanf("%d", &k);
    
    if(k <= 0)
    {
        printf("Valore di n inaccettabile. Il valore di k deve essere positivo");
    }
    else if(k > 0)
    {
        if(k == 1)
        {
            printf("Il %d° numero altamente composto è: \n", k);
            successione_iterativa(k);
        }
        else if(k > 1)
        {
            printf("I primi %d numeri altamente composti sono: \n", k);
            successione_iterativa(k);
        }
    }
}

// ==============================
//           FUNZIONI
// ==============================
//      Successione iterativa
// ==============================
void successione_iterativa(int k)
{
    int numero_divisori_precedente = 0;
    int numero_divisori_corrente = 0;
    int trovato = 0;

    for(int numero = 1; trovato != k; numero = numero + 1)
    {
        for(int divisore = 1; divisore <= numero; divisore = divisore + 1)
        {
            if(numero % divisore == 0)
            {
                numero_divisori_corrente = numero_divisori_corrente + 1;
            }
            if(numero_divisori_corrente > numero_divisori_precedente)
            {
                printf("%d\n", numero);
                trovato = trovato + 1;
                numero_divisori_precedente = numero_divisori_corrente;
            }
        }
        numero_divisori_corrente = 0;
    }
}