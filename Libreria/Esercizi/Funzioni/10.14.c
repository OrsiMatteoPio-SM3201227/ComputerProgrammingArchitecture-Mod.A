// Si consideri la sequenza di Hailstone. Si parta da un intero n > 0: • Si generi il prossimo numero m della sequenza come segue: – se n è pari, allora m = n/2; – altrimenti, m = 3n + 1; • Si ripeta fino a che non si genera m = 1; • Si conti la lunghezza della sequenza generata. Si utilizzino due funzioni - sequenza e lunghezza - per la definizione della suddetta sequenza a partire da un intero n > 0 ricevuto in input dall’utente.

// ==============================
//           LIBRERIA
// ==============================
#include <stdio.h>

// ==============================
//           FUNZIONI
// ==============================
//           Sequenza
// ==============================
int sequenza(int numero);
// ==============================
//           Lunghezza
// ==============================
int lunghezza(int m);

// ==============================
//           PROGRAMMA
// ==============================
//      Corpo del programma
// ==============================
int main(void)
{
    // Dichiarazione della variabile
    int numero;

    printf("Inserire il valore di n: ");
    scanf("%d", &numero);
    
    int m = sequenza(numero);
    
    // Richiamo della funzione sequenza
    printf("Dato il numero %d, si ottiene: %d\n", numero, sequenza(numero));

    // Richiamo della funzione lunghezza
    printf("La lunghezza della sequenza generata è di %d numeri\n", lunghezza(m));
    
    // Ripetizione della chiamata della funzione sequenza fino a ottenere m = 1
    while(m != 1)
    {
        if(sequenza(m) == 1)
        {
            printf("Si ottiene m = 1 per il numero %d\n", m);
        }
        m = sequenza(m);
    }
}

// ==============================
//           FUNZIONI
// ==============================
//           Sequenza
// ==============================
int sequenza(int numero)
{
    if(numero % 2 == 0)
    {
        return numero / 2;
    }
    else
    {
        return (3 * numero) + 1;
    }
}
// ==============================
//           Lunghezza
// ==============================
int lunghezza(int m)
{
    int conto = 1;
    
    while(m != 1)
    {
        m = sequenza(m);

        conto = conto + 1;
    }
    return conto;
}