#include <stdio.h>

void massimominimo(int N, int *max, int *min)
{
  int input;
  
  for(int i=1; i<=N; i=i+1)
  {
    printf("Inserire il valore del %d° numero: ", i);
    scanf("%d", &input);

    if(i==1)
    {
      *max=input;
      *min=input;
    }
    else
    {
      if(input>*max)
      {
        *max=input;
      }
      else
      {
        *min=input;
      }
    }
  }
  
}

int main(void)
{
  int N, max=0, min=0;

  printf("Inserire il valore di N: ");
  scanf("%d", &N);

  massimominimo(N, &max, &min);

  printf("Il valore di N è: %d\n", N);
  printf("Il Massimo dei numeri è: %d\n", max);
  printf("Il Minimo dei numeri è: %d\n", min);
}