#include <stdio.h>

int sommaprodotto(int *x, int *y, int *z)
{
  printf("La somma è: %d\n", *z=*x+*y);
  return(printf("Il prodotto è: %d\n", (*x)*(*y)));
}

int main(void)
{
  int a, b, somma=0;

  printf("Inserire valore a: ");
  scanf("%d", &a);
  printf("Inserire valore b: ");
  scanf("%d", &b);

  sommaprodotto(&a, &b, &somma);
}