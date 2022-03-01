// Implementare e testare le seguenti funzioni: 1. funzione che aggiunge un elemento x in testa alla lista: void addT(ListaDiElementi * l, int x); 2. funzione che aggiunge un elemento x in coda alla lista: void addC(ListaDiElementi * l, int x); 3. funzione che calcola la lunghezza di una lista: int length(ListaDiElementi l); 4. funzione che verifica se una lista è o meno ordinata in modo decrescente: int ord(ListaDiElementi l); 5. funzione che inserisce un nuovo elemento con valore v subito prima della prima occorrenza di un elemento con valore x (se x non è presente, la lista rimane inalterata): void inserire_mezzo(ListaDiElementi * l, int x, int v). Successivamente, implementare e testare le seguenti funzioni: 1. funzione che elimina l'elemento in testa alla lista: void cancT(ListaDiElementi * l); 2. funzione che elimina l'elemento in coda alla lista: void cancC(ListaDiElementi * l); 3. funzione che scambia i primi due elementi della lista: void scambiaprimidue(ListaDiElementi * l); 4. funzione che stampa tutti gli elementi nella lista: void stampalista(ListaDiElementi l).

// ==============================
//           LIBRERIA
// ==============================
#include <stdio.h>
#include <stdlib.h>

// ==============================
//         LISTA LINKATA
// ==============================
struct elemento
{
    // Valore memorizzato
    int info;

    // Collegamento al prossimo elemento (dello stesso tipo)
    struct elemento * next;
};

// Denominazione
typedef struct elemento ElementoDiLista;
typedef ElementoDiLista * ListaDiElementi;

// ==============================
//           FUNZIONI
// ==============================
//      Aggiungere in testa
// ==============================
void addT(ListaDiElementi * l, int x);
// ==============================
//       Aggiungere in coda
// ==============================
void addC(ListaDiElementi * l, int x);
// ==============================
//          Lunghezza
// ==============================
int length(ListaDiElementi l);
// ==============================
//    Ordinamento decrescente
// ==============================
int ord(ListaDiElementi l);
// ==============================
//      Aggiungere in mezzo
// ==============================
void inserire_mezzo(ListaDiElementi * l, int x, int v);
// ==============================
//  Eliminare elemento in testa
// ==============================
void cancT(ListaDiElementi * l);
// ==============================
//   Eliminare elemento in coda
// ==============================
void cancC(ListaDiElementi * l);
// ==============================
// Scambiare i primi due elementi
// ==============================
void scambiaprimidue(ListaDiElementi * l);
// ==============================
//            Stampa
// ==============================
void stampalista(ListaDiElementi l);

// ==============================
//           PROGRAMMA
// ==============================
//      Corpo del programma
// ==============================
int main(void)
{
    // Dichiarazione delle variabili necessarie per le funzioni
    int numero_testa, numero_coda, numero_mezzo, elemento_mezzo;

    // Dichiarazione della variabile dimensione
    int dimensione;

    printf("Inserire il valore della dimensione della lista linkata: ");
    scanf("%d", &dimensione);
    
    // Allocazione dinamica della lista linkata
    ListaDiElementi lista = NULL;

    ListaDiElementi numero = malloc(sizeof(ElementoDiLista));

    printf("Inserire il primo numero della lista: ");
    scanf("%d", &(* numero).info);

    lista = numero;

    for(int i = 1; i < dimensione; i = i + 1)
    {
        (* numero).next = malloc(sizeof(ElementoDiLista));

        numero = (* numero).next;

        if(i == dimensione - 1)
        {
            printf("Inserire l'ultimo numero della lista: ");
            scanf("%d", &(* numero).info);
        }
        else
        {
            printf("Inserire un numero: ");
            scanf("%d", &(* numero).info);
        }
    }

    (* numero).next = NULL;

    // Richiamo della funzione aggiungere in testa
    printf("Inserire il numero che si desidera aggiungere in testa alla lista: ");
    scanf("%d", &numero_testa);
    addT(&lista, numero_testa);
    // Richiamo della funzione aggiungere in coda
    printf("Inserire il numero che si desidera aggiungere in coda alla lista: ");
    scanf("%d", &numero_coda);
    addC(&lista, numero_coda);
    // Richiamo della funzione lunghezza
    printf("La lunghezza della lista è: %d\n", length(lista));
    // Richiamo della funzione ordinamento decrescente
    ord(lista);
    // Richiamo della funzione aggiungere in mezzo
    printf("Inserire il numero prima del quale si desidera aggiungere un numero: ");
    scanf("%d", &elemento_mezzo);
    printf("Inserire il numero che si desidera aggiungere in mezzo alla lista: ");
    scanf("%d", &numero_mezzo);
    inserire_mezzo(&lista, elemento_mezzo, numero_mezzo);
    // Richiamo della funzione eliminare elemento in testa
    cancT(&lista);
    // Richiamo della funzione eliminare elemento in coda
    cancC(&lista);
    // Richiamo della funzione scambiare i primi due elementi
    scambiaprimidue(&lista);
    // Richiamo della funzione stampa
    stampalista(lista);

    // Pulizia dello heap
    free(lista);
}

// ==============================
//           FUNZIONI
// ==============================
//      Aggiungere in testa
// ==============================
void addT(ListaDiElementi * l, int x)
{
    ListaDiElementi new = malloc(sizeof(ElementoDiLista));

    (* new).info = x;
    (* new).next = * l;

    * l = new;
}
// ==============================
//       Aggiungere in coda
// ==============================
void addC(ListaDiElementi * l, int x)
{
    ListaDiElementi new = malloc(sizeof(ElementoDiLista));

    (*new).info = x;
    (*new).next = NULL;

    if(*l ==NULL)
    {
        * l = new;
    }
    else
    {
        ListaDiElementi corr = * l;

        while((*corr).next != NULL)
        {
            corr = (* corr).next;
        }
        (* corr).next = new;
    }
}
// ==============================
//          Lunghezza
// ==============================
int length(ListaDiElementi l)
{
    if(l == NULL)
    {
        return 0;
    }
    else
    {
        return 1 + length((* l).next);
    }
}
// ==============================
//    Ordinamento decrescente
// ==============================
int ord(ListaDiElementi l)
{
    // Dichiarazione di una variabile di controllo: 0 se non è ordinata in modo decrescente, 1 se è ordinata in modo decrescente
    int ordinato = 1;

    while((* l).next != NULL && ordinato)
    {
        if((* l).info < (* l).next -> info)
        {
            ordinato = 0;
        }
        l = (* l).next;
    }

    if(ordinato == 0)
    {
        printf("La lista non è ordinata in modo decrescente\n");
    }
    else if(ordinato == 1)
    {
        printf("La lista è ordinata in modo decrescente\n");
    }
}
// ==============================
//      Aggiungere in mezzo
// ==============================
void inserire_mezzo(ListaDiElementi * l, int x, int v)
{
    ListaDiElementi corr = * l;
    
    ListaDiElementi new = malloc(sizeof(ElementoDiLista));
    (* new).info = v;

    while(corr -> next -> info != x)
    {
        corr = corr -> next;
    }
    new -> next = corr -> next;
    corr -> next = new;
}
// ==============================
//  Eliminare elemento in testa
// ==============================
void cancT(ListaDiElementi * l)
{
    ListaDiElementi corr = * l;

    * l = (* corr).next;
}
// ==============================
//   Eliminare elemento in coda
// ==============================
void cancC(ListaDiElementi * l)
{
    ListaDiElementi corr = * l;

    while((*corr).next->next != NULL)
    {
        corr = (* corr).next;
    }
    (* corr).next = NULL;
}
// ==============================
// Scambiare i primi due elementi
// ==============================
void scambiaprimidue(ListaDiElementi * l)
{
    ListaDiElementi head = * l;
    
    int first_number_info = head -> info;
    int second_number_info = head -> next -> info;

    head -> info = second_number_info;
    head -> next -> info = first_number_info;
}
// ==============================
//            Stampa
// ==============================
void stampalista(ListaDiElementi l)
{
    printf("Gli elementi della lista sono: [");

    while(l != NULL)
    {
        printf("%d", (* l).info);
        l = (* l).next;

        if(l!=NULL)
        {
            printf (", ");
        }
    }

    printf("]\n");
}
