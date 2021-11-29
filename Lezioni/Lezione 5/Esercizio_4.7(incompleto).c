#include <stdio.h>
#include <math.h>

/* Funzione analitica */
int funzione_analitica(int n)
{
  return(printf("Funzione analitica: %d", (n*(n+1))/2));
}

/* Funzione iterativa */
int funzione_iterativa(int n)
{
  int i=n;
  for(int l=1; l<=n; l=l+1)
  {
    n=i*(n)
  }
}

/* Funzione di test */
int main()
{
  int n;
  
  printf("Inserire valore di n: ");
  scanf("%d", &n);
  
  funzione_analitica(n);
}