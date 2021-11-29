#include <stdio.h>

float funzione_iterativa(int n, int p)
{
  float a_n=p, a_n1;
  
  for(int i=1; i<n; i=i+1)
  {
    a_n1=0.5*(a_n+(p/a_n));
    a_n=a_n1;
  }
  return a_n;
}

float funzione_ricorsiva(int n, int p)
{
  if(n==1)
  {
    return(p);
  }
  else
  {
    return(0.5*(funzione_ricorsiva(n-1, p)+(p/funzione_ricorsiva(n-1, p))));
  }
}

int main(void)
{
  int n, p;

  printf("Inserire valore di n: ");
  scanf("%d", &n);
  printf("Inserire valore di n: ");
  scanf("%d", &p);

  printf("Iterativa: %f\n", funzione_iterativa(n, p));
  printf("Ricorsiva: %f\n", funzione_ricorsiva(n, p));
  return 0;
}