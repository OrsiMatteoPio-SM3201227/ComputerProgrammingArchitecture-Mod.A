// Si scriva una funzione che prenda in input una stringa e restituisca 1 se la stringa è palindroma, 0 altrimenti. Esempi di stringhe palindrome sono anna, oro, etc., ovvero stringhe che sono leggibili in ugual modo da sinistra a destra, e viceversa. Nota: si implementi anche una funzione che esegua lo stesso test a livello di array di interi. In tal caso si intende palindromo il vettore [1,2,3,3,2,1] e non il vettore [1,2,3].

// ==============================
//           LIBRERIA
// ==============================
#include <stdio.h>
#include <stdlib.h>

// ==============================
//           FUNZIONI
// ==============================
//  Controllo stringa palindroma
// ==============================
int controllo_stringa_palindroma(char stringa[], int dimensione_stringa);
// ==============================
//   Controllo array palindromo
// ==============================
int controllo_array_palindromo(int a[], int dimensione_array);

// ==============================
//           PROGRAMMA
// ==============================
//      Corpo del programma
// ==============================
int main(void)
{
    // Dichiarazione delle variabili dimensione e allocazione dinamica di array
    int dimensione_stringa, dimensione_array;

    printf("Inserire il valore della dimensione dell'array di stringa: ");
    scanf("%d", &dimensione_stringa);
    printf("Inserire il valore della dimensione dell'array di interi: ");
    scanf("%d", &dimensione_array);

    char * stringa = malloc(sizeof(char) * dimensione_stringa);
    int * a = malloc(sizeof(int) * dimensione_array);

    printf("Inserire la stringa: ");
    scanf("%s", stringa);

    for(int i = 0; i < dimensione_array; i = i + 1)
    {
        printf("Inserire il %d° numero nella posizione d'indice %d dell'array: ", i + 1, i);
        scanf("%d", &a[i]);
    }
    
    // Richiamo delle funzioni controllo stringa palindroma e array palindromo
    controllo_stringa_palindroma(stringa, dimensione_stringa);
    controllo_array_palindromo(a, dimensione_array);
}

// ==============================
//           FUNZIONI
// ==============================
//  Controllo stringa palindroma
// ==============================
int controllo_stringa_palindroma(char stringa[], int dimensione_stringa)
{
    // Dichiarazione della variabile controllo - 0 se non è palindroma, 1 se è palindroma
    int controllo = 1;

    for(int i = 0; i <= (dimensione_stringa - 1) / 2.0; i = i + 1)
    {
        if(stringa[i] != stringa[dimensione_stringa - 2 - i])
        {
            controllo = 0;
        }
    }
    
    if(controllo == 0)
    {
        printf("La stringa non è palindroma\n");
        return controllo;
    }
    else if(controllo == 1)
    {
        printf("La stringa è palindroma\n");
        return controllo;
    }
}
// ==============================
//   Controllo array palindromo
// ==============================
int controllo_array_palindromo(int a[], int dimensione_array)
{
    // Dichiarazione della variabile controllo - 0 se non è palindroma, 1 se è palindroma
    int controllo = 1;
    
    for(int i = 0; i < dimensione_array / 2.0; i = i + 1)
    {
        if(a[i] != a[dimensione_array - 1 - i])
        {
            controllo = 0;
        }
    }

    if(controllo == 0)
    {
        printf("L'array non è palindromo\n");
        return controllo;
    }
    else if(controllo == 1)
    {
        printf("L'array è palindromo\n");
        return controllo;
    }
}