#include <stdio.h>

float funzione_iterativa(int n)
{
  float sommatoria=0;

  for(int k=0; k<n; k=k+1)
  {
    sommatoria=sommatoria+(1.0/((2*k+1)*(2*k+1)));
  }
  return(sommatoria);
}

float funzione_ricorsiva(int n)
{
  if(n==0)
  {
    return 1;
  }
  else
  {
    return(1.0/((2*(funzione_ricorsiva(n-1))+1)*(2*(funzione_ricorsiva(n-1))+1)))+funzione_ricorsiva(n-1);
  }
}

int main(void)
{
  int n;

  printf("Inserire valore di n: ");
  scanf("%d", &n);

  printf("La sommatoria iterativa è: %f\n", funzione_iterativa(n));
  printf("La sommatoria ricorsiva è: %f\n", funzione_ricorsiva(n));
}