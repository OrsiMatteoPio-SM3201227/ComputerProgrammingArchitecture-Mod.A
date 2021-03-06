// Si scriva una funziona che legga un array di interi di dimensione fissata, lo inverta e lo stampi. Nota: l’inversione deve essere esplicita, non basta stampare l’array in senso inverso (i.e., dagli ultimi ai primi elementi).

// ==============================
//           LIBRERIA
// ==============================
#include <stdio.h>
#include <stdlib.h>

// ==============================
//           FUNZIONI
// ==============================
//          Inversione
// ==============================
int * inversione_array(int a[], int dimensione);

// ==============================
//           PROGRAMMA
// ==============================
//      Corpo del programma
// ==============================
int main(void)
{
    // Dichiarazione della variabile dimensione e allocazione dinamica di un array di interi
    int dimensione;

    printf("Inserire il valore della dimensione dell'array: ");
    scanf("%d", &dimensione);

    int * a = malloc(sizeof(int) * dimensione);

    for(int i = 0; i < dimensione; i = i + 1)
    {
        printf("Inserire il %d° numero intero nella posizione d'indice %d dell'array: ", i + 1, i);
        scanf("%d", &a[i]);
    }

    // Richiamo della funzione inversione dell'array e salvataggio dell'array invertito
    int * array_invertito = inversione_array(a, dimensione);

    // Pulizia dell'heap
    free(a);
}

// ==============================
//           FUNZIONI
// ==============================
//     Inversione dell'array
// ==============================
int * inversione_array(int a[], int dimensione)
{
    int variabile_temporanea;

    for(int i = 0; i < (dimensione / 2.0); i = i + 1)
    {
        variabile_temporanea = a[i];
        a[i] = a[(dimensione - 1) - i];
        a[(dimensione - 1) - i] = variabile_temporanea;
    }
    return a;
}