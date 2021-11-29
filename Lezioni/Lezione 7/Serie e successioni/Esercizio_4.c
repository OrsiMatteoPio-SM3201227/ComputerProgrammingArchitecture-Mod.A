#include <stdio.h>

float funzione_iterativa(int n)
{
  int k;
  float sommatoria=0;

  for(k=0; k<=n; k=k+1)
  {
    sommatoria=sommatoria+(1/(2*k+1)*(2*k+1));
  }
  return(sommatoria);
}

float funzione_ricorsiva(int n)
{
  int sommatoria=0;

  if(n==0)
  {
    return(sommatoria=0);
  }
  else
  {
    return(sommatoria=sommatoria+(1/((2*(funzione_ricorsiva(n-1))+1)*(2*(funzione_ricorsiva(n-1))+1))));
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