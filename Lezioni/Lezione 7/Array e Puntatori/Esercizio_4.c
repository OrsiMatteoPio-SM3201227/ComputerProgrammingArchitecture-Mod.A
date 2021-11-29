#include <stdio.h>

int indirizzo(int x)
{
  //Dichiarazione del puntatore
  int *p=&x;

  // Stampa dell'indirizzo della variabile
  return(printf("Indirizzo della variabile nella funzione indirizzo: %p\n", p));
}

int main(void)
{ 
  // Dichiarazione della variabile e del pntatore
  int x, *p=&x;

  // Stampa dell'indirizzo della variabile
  printf("Indirizzo della variabile nella funione main: %p\n", p);

  // Richiamo della funzione
  indirizzo(x);
}