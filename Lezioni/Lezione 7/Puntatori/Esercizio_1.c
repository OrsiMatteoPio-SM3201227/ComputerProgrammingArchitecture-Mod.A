#include <stdio.h>

int main(void)
{
  int v1=4, v2=29;
  int *p1, *p2, *p3;

  // Esercizio n°1 - Stampa delle variabili puntate dai puntatori non indirizzati
  printf("Valori dei puntatori: p1 %d, p2 %d, p3 %d\n", *p1, *p2, *p3);

  // Esercizio n°2 - Stampa degli indirizzi dei puntatori
  printf("Indirizzi dei puntatori: p1 %p, p2 %p, p3 %p\n", p1, p2, p3);

  // Esercizio n°3 - Assegnamento dell’indirizzo di v1 a p1 e dell'indirizzo di v2 a p2
  p1=&v1, p2=&v2;

  // Esercizio n°4 - Stampa delle variabili puntate dai puntatori
  printf("Valori dei puntatori: p1 %d, p2 %d, p3 %d\n", *p1, *p2, *p3);

  // Esercizio n°5 - Incremento di v1 e stampa del suo valore
  v1=v1+1;
  printf("Valore incrementato di v1 : %d\n", v1);

  // Esercizio n°6 - Stampa del valore della variabile puntata da p1
  printf("Valore della variabile puntata da p1: %d\n", *p1);

  // Esercizio n°7 - Assegnamento dell’indirizzo di v1 a p2
  p2=&v1;

  // Esercizio n°8 - Incremento del valore della variabile puntata da p1, attraverso p1 stesso
  *p1=*p1+1;

  // Esercizio n°9 - Stampa del valore della variabile puntata da p2
  printf("Valore della variabile puntata da p2: %d\n", *p2);

  // Esercizio n°10 - Assegnamento dell’indirizzo di p2 a p3
  p3=p2;

  // Esercizio n°11 - Stampa del valore della variabile puntata da p3 (puntata a sua volta da p2) tramite p3
  printf("Valore della variabile puntata da p3 (puntata a sua volta da p2): %d\n", *p3);

  // Esercizio n°12 - Decremento e stampa del valore della variabile puntata da p3 (puntata a sua volta da p2) tramite p3
  *p3=*p3-1;
  printf("Valore decrementato della variabile puntata da p3 (puntata a sua volta da p2): %d\n", *p3);
  
  // Commentare ogni istruzione spiegando cosa sta succedendo in termini di assegnazioni, indirizzi e locazioni di memoria.
}