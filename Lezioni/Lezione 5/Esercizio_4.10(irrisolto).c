#include <stdio.h>

int funzione_iterativa(int n)
{
  int i=2, resto=1;
  while(resto!=0)
  {
    i=i+1;
    resto=n%i;
  }
  if(i==n && resto==0)
  {
    return(printf("%d è un numero primo", n));
  }
  else
  {
    return(printf("%d non è un numero primo", n));
  }
}

int funzione_ricorsiva(int n, int i)
{
  
  if(resto==0)
  {
    return(printf("%d è un numero primo", n));
  }
  else
  {
    return(printf("%d non è un numero primo", n));
  }
}

int main()
{
  int n;

  printf("Inserire valore n: ");
  scanf("%d", &n);

  funzione_ricorsiva(n);
}