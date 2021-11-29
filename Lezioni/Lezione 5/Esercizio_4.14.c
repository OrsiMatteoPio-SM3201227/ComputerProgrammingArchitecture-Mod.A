#include <stdio.h>

void sequenza(int n)
{
  for(int m=n; m!=1; printf("Il valore di m è: %d\n", m))
  {
    if(m%2==0)
    {
      m=m/2;
    }
    else
    {
      m=(3*m)+1;
    }
  }
}

void lunghezza(int n)
{
  if(n%2==0)
  {
    printf("La sequenza è composta da %d numeri", (n/2)-1);
  }
  else
  {
    printf("La sequenza è composta da %d numeri", (3*n)+1);
  }
}

int main()
{
  int n, b;
  printf("Inserire valore di n: ");
  scanf("%d", &n);

  sequenza(n);
  lunghezza(n);
}