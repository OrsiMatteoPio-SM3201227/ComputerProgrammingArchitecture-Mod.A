// Si definisce triangolare un numero costituito dalla somma dei primi n numeri interi positivi per un certo n. Ad esempio per Q = 10 si ha Q = 1 + 2 + 3 + 4 da cui n = 4. Si scriva una funzione che chieda all'utente n, ed inserisca in un array di dimensione n i primi n numeri triangolari.

// ==============================
//           LIBRERIA
// ==============================
#include <stdio.h>
#include <stdlib.h>

// ==============================
//           FUNZIONI
// ==============================
//  Array di numeri triangolari
// ==============================
int * array_triangolari(int n);

// ==============================
//           PROGRAMMA
// ==============================
//      Corpo del programma
// ==============================
int main(void)
{
    // Dichiarazione della variabile dimensione
    int n;

    printf("Inserire il valore di n: ");
    scanf("%d", &n);

    // Richiamo della funzione numeri triangolari e salvataggio dell'array con i numeri triangolari
    int * array_numeri_triangolari = malloc(sizeof(int) * n);
    array_numeri_triangolari = array_triangolari(n);
    
    for(int i = 0; i < n; i = i + 1)
    {
        printf("L'elemento nella posizione d'indice %d dell'array è: %d\n", i, array_numeri_triangolari[i]);
    }
}

// ==============================
//           FUNZIONI
// ==============================
//  Array di numeri triangolari
// ==============================
int * array_triangolari(int n)
{
    // Dichiarazione di una variabile di conteggio e allocazione dinamica di un array
    int conto = 0;
    int * array_numeri_triangolari = malloc(sizeof(int) * n);

    for(int i = 0, numero = 1; i < n && conto != n; i = i + 1, numero = numero + 1)
    {
        array_numeri_triangolari[i] = (numero * (numero + 1)) / 2;
        conto = conto + 1;
    }
    return array_numeri_triangolari;
}