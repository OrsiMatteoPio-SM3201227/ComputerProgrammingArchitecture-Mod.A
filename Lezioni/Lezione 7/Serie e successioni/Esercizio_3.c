#include <stdio.h>

float funzione_iterativa(float x, int n)
{
  float i=x;
  float sommatoria=1;

  for(int k=0; k<=n; k=k+1)
  {
    if(k==0)
    {
      x=1;
    }
    else
    {
      x=x*i;
      sommatoria=sommatoria+x;
    }
  }
  return(sommatoria);
}

float funzione_ricorsiva(float x, int n)
{
  float sommatoria;
  
  if(n==0)
  {
    return(x=1);
  }
  else
  {
    return(sommatoria=sommatoria+(funzione_ricorsiva(x, n-1)*funzione_ricorsiva(x, n-1)));
  }
}

int main(void)
{
  int x, n;

  printf("Inserire valore di x: ");
  scanf("%d", &x);
  printf("Inserire valore di n: ");
  scanf("%d", &n);

  printf("La sommatoria iterativa è: %f\n", funzione_iterativa(x, n));
  printf("La sommatoria ricorsiva è: %f\n", funzione_ricorsiva(x, n));
}