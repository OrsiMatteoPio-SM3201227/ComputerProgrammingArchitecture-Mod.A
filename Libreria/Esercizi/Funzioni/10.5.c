// Si scriva una funzione che riceva in ingresso un numero float corrispondente al prezzo iniziale di un articolo e un numero int rappresentante il valore percentuale di sconto e restituisca il prezzo scontato.

// ==============================
//           LIBRERIA
// ==============================
#include <stdio.h>

// ==============================
//           FUNZIONI
// ==============================
//        Prezzo scontato
// ==============================
float prezzo_scontato(float prezzo_iniziale, int sconto);
// ==============================

// ==============================
//           PROGRAMMA
// ==============================
//      Corpo del programma
// ==============================
int main(void)
{
    // Dichiarazione delle variabili
    float prezzo_iniziale;
    int sconto;

    printf("Inserire il prezzo iniziale dell'articolo: ");
    scanf("%f", &prezzo_iniziale);
    printf("Inserire la percentuale di sconto: ");
    scanf("%d", &sconto);
    

    // Richiamo della funzione prezzo scontato
    printf("Il prezzo iniziale dell'articolo - €%f - scontato del %d per cento è: €%f\n", prezzo_iniziale, sconto, prezzo_scontato(prezzo_iniziale, sconto));
}

// ==============================
//           FUNZIONI
// ==============================
//        Prezzo scontato
// ==============================
float prezzo_scontato(float prezzo_iniziale, int sconto)
{
    return prezzo_iniziale - ((prezzo_iniziale / 100.0 ) * sconto);
}