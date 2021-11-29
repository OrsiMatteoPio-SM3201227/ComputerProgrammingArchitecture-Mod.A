// Struttura di un programma in C

// Punto n°1
// Dichiarazione di direttive al processore
#include <stdio.h>
#include <stdlib.h>
// Per dare queste istruzioni si usa: #include <nome.h>.    I file "nome" sono in formato .h (header), contengono solo nomi di funzione. Esistono i corrispettivi file in formato .c, che contengono anche il codice delle funzioni.

// Punto n°2
// Dichiarazione di variabili globali (attenzione: da usare oculatamente! Nel 99% dei casi non servono)

// Punto n°3
/* Dichiarazione di funzioni */

// Punto n°4
/* Dichiarazione di funzione main */
// int main()
// {
// Una funzione che richiama una funzione si dice "funzione chiamante", mentre la funzione richiamata si dice "funzione chiamata".
//
//  return 0;
// }

// I Puntatori
// I puntatori puntano una zona di memoria specifica per operare. Vi sono vari tipi di putatori:
// - "int *p;", puntatore per numeri interi;
// - "double *p;", puntatore per numeri con la virgola;
//
// Si considerino i seguenti esempi:
// Esempio n°1:
// int x=10
// int *p;
// p=&x; &=address of
//
// Esempio n°2:
// int x=10, y=20;
// int *p, *q;
// p=&x;
// q=&y;
// x=y+1;
// *p=*q+1
//
// Esercizio n°3 (per casa):
// Fare printf("%d", p); e poi printf("%d", *p);
//
// Esempio n°4:
// Si introduca la funzione "incrementa una variabile";
// main()
// {
//  int x=0;
//  int y=5;
//  incr(&x, 5); // aumenta di 5
//  incr(&y, 7); //aumenta di 7
// }
//
// void incr(int *p, int q)
// {
//  *p=*p+q;
// }
// (per casa: disegnare la memora)
//
// Esempio n°5:
// Si introduca la funzione che ritorni 2 valori:
// x,y ---> x+y, x*y
// 
// int sommaprodotto(int x, int y, int *s)
// {
//  *s=x+y;
//  return(x*y);
// }
//
// Array
// Un array è una struttura dati che descrive una sequenza di valori tutti dello stesso tipo (es. array di interi). Ogni elemento della sequenza è associato ad una posizione (indice).
// La dichiarazione in C di un array:
// int a[10]; // array di 10 elementi (indici da 0 a 9)
// In C l'array è un puntatore
// Inizializzazione di un array con un valore costante(0):
// int a[5];
// int i;
// for(i=0; i<5; i++)
// {
//  a[i]=0;
// }
//
// Attenzione: quando si accede a un array bisogna sempre stare attenti alla struttura dati.
//
//
// Funzione ausiliaria per riempire un array con dei dati di input, il ruolo dei puntatori
// void lettura(int v[], int dim)
//{
//  int tot=0; int i=0;
//  for(i=0; i<dim; i=i+1)
//    scanf("%d", &v[i]);
// }
//
// Ricerca con flag
// int member(int a[], int dim, int x)
//{
//  int i=0;
//  int trovato=0;
//  while(i<dim && !trovato)
//  {
//    if(a[i]==x) trovato=1;
//    i++
//  }
//  return trovato;
//}
//
// Si considerino i seguenti esercizi:
// - Esiste i appartenente a [0, dim]. a[i]<0. Esiste almeno un elemento del vettore che è negativo.
// - Esiste i appartenente a [0, dim]. a[i]%2==0. Esiste almeno un elemento del vettore che è pari.
// - Esiste i appartenente a [o, dim-1]. a[i]==a[i+1]. Se il successivo è uguale.
// In generale: - Esiste i appartenente a [0, dim]. P(x, i).
//
// Proprietà globali di un array
// - Per ogni i appartenente a [0, dim]. a[i]<0. Sono tutti negativi
// - Per ogni i appartenente a [0, dim]. a[i]%2==0. Sono tutti pari
// - Per ogni i appartenente a [0, dim-1]. a[i]==a[i+1]. Sono tutti uguali.
//
// Gli array sono puntatori (implicitamente) in C
// int a[]=int *a;
//
// Si può assegnare un array a un puntatore
//
// Accesso alla locazione a[i] mediante aritmetica dei puntatori
// - data una variabile di tipo int *p, (p+1) puntatore che però punta ala locasione successiva (dopo p)
// Aritmetica dei puntatori
// (Da guardare su slides)
//
// Problem solving su array
// (Da guardare su slides)
//
// Memoria dinamica
// Si introduce l'heap, una parte diversa della memoria in cui le variabili non vengono allocate dai blocchi, ma tramite delle operazioni eseguite dal programma (v'è una gestione esplicita, indipendente dai blocchi). Si crea una tabella di <loc, val>.
// Allocazione della memoria mediante una funzione della libreria standard <stdlib.h> malloc(...) (memory allocation). Essa crea una variabile nuova nello heap, e restituisce un puntatore. Bisogna passare alla malloc la quantità di memoria richiesta. Essa dipende dal tipo della variabile (la grandezza di un intero si può ottenere mediante la funzione sizeof(int)).
// Si consideri il seguente esempio:
// Esempio - Esempio di allocazione per 1 singolo intero
// {int x=10;
// int *p;
// p=malloc(sizeof(int))
// *p=x+1;
// x=*p+2;
// (p è una sorta di variabile senza nome)
// }
//
// Allocazioni successive fanno perdere il reference alla zona di memoria, ma la memoria rimane allocata. Si chiama garbage.
// Bisogna quindi gestire esplicitamente la liberaziome della memoria tramite la funzione: free(p):
// {
// int *p=malloc(sizeof(int));
// *p=12;
// free(p);
// *p ---> non si può sapere cosa restituirà
//
// Importante
// {
// int n;
// scanf("%d", &n);
// int *p=malloc(sizeof(int)*n);
// }
//
// Liste
// Una lista di elementi collegati (linked list) è una sequenza di elementi dello stesso tipo che può avere una dimensione variabile (comincia con un collegamento iniziale e prosegue con collegamenti successivi).
// Dichiarazione di una lista in C:
// Collegamenti --> Puntatori
// Elementi --> Struct (struttura)
// struct elemento
// {
//  //Valore memorizzato
//  int info;
//
//  // Puntatori al prossimo (stesso tipo)
//  struct elemento*next;
// }
//
// Dare un nome ad una struct usando typedef
// typedef struct elemento ElementoDiLista;
// typdef ElementoDiLista*ListaDiElementi;
//
// Si considerino i seguenti esercizi:
// Esercizio 1: Crea la lista con i primi N numeri;
// Esercizio 2: Chiedi input ad un utente fino a che un valore negativo viene inserito. Per ogni numero pari inserito lo si memorizzi in una lista. I numeri dispari sono inseriti in un'altra lista. Alla fine si riporti (printf) quale delle due liste sia più grande, e la somma totale dei valori in ciascuna lista.