#include <stdio.h>

int main(void)
{
  // Dichiarazione delle variabili
  int x, precedente, successivo;

  printf("Inserire valore x: ");
  scanf("%d", &x);
  
  // Precedente di x
  precedente=x-1;
  printf("Numero precedente: %d\n", precedente);

  // Successivo di x
  successivo=x+1;
  printf("Numero successivo: %d\n", successivo);

  return 0;
}