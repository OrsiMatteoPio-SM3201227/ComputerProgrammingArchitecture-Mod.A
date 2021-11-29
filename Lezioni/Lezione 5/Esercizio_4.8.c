#include <stdio.h>

void funzione(int a, int b)
{
  if(a%2==0)
  {
    printf("I numeri dispari sono: ");
    for(int i=a; i<b; i=i+2)
    {
      printf("%d ", i+1);
    }

    printf("\nI numeri pari sono: ");
    for(int i=a; i<=b; i=i+2)
    {
      printf("%d ", i);
    }
  }
  else
  {
    printf("I numeri dispari sono: ");
    for(int i=a; i<=b; i=i+2)
    {
      printf("%d ", i);
    }
    printf("\nI numeri pari sono: ");
    for(int i=a; i<=b/2; i=i+1)
    {
      printf("%d ", 2*i);
    }
  }
}

int main()
{
  int a, b;

  printf("Inserire valore a: ");
  scanf("%d", &a);
  printf("Inserire valore b: ");
  scanf("%d", &b);

  funzione(a, b);
}