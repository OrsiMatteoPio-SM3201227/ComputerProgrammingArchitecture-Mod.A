// Si scriva una funzione che prenda in input una variabile int e ne stampi l’indirizzo. Successivamente, si dichiari nel main una variabile, stampandone l’indirizzo e poi passandola alla funzione descritta sopra. I due indirizzi stampati sono gli stessi? Si provi a spiegare quanto osservato, aiutandosi disegnando la memoria del programma realizzato.

// ==============================
//           LIBRERIA
// ==============================
#include <stdio.h>

// ==============================
//           FUNZIONI
// ==============================
//        Stampa indirizzo
// ==============================
void stampa_indirizzo(int * variabile);

// ==============================
//           PROGRAMMA
// ==============================
//      Corpo del programma
// ==============================
int main(void)
{
    // Dichiarazione della variabile
    int variabile;

    printf("Inserire il valore della variabile: ");
    scanf("%d", &variabile);

    // Richiamo della funzione stampa indirizzo
    printf("L'indirizzo della variabile è: %p\n", &variabile);
    stampa_indirizzo(&variabile);
}

// ==============================
//        Stampa indirizzo
// ==============================
void stampa_indirizzo(int * variabile)
{
    printf("Secondo la funzione, l'indirizzo della variabile è: %p\n", &variabile);
}