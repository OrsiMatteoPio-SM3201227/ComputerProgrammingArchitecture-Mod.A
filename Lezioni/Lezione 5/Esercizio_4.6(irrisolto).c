#include <stdio.h>
#include <math.h>

int fattoriale_iterativo(int n)
{
  for(int i=n; i>1; i=i-1)
  {
    n=n*(i-1);
  }
 return(printf("Il fattoriale iterativo è: %d\n", n));
}

int fattoriale_ricorsivo(int n)
{return 0;}

int main()
{
  int n;
  
  for(int n=1; n<=10; n=n+1)
  {
    fattoriale_iterativo(n);
  }
  
  return n;
}