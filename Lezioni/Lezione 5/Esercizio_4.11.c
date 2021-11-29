#include <stdio.h>

void gcd_iterativo(int a, int b)
{
  while(a!=b)
  {
    if(a>b)
    {
      a=a-b;
    }
    else
    {
      b=b-a;
    }
  }
}

int gcd_ricorsivo(int a, int b)
{
  if(a>b)
  {
    if(b==0)
    {
      return a;
    }
    else
    {
      return((printf("Il GCD è: %d\n", gcd_ricorsivo(b, a%b))));
    }
  }
  else
  {
    if(a==0)
    {
      return b;
    }
    else
    {
      return((printf("Il GCD è: %d\n", gcd_ricorsivo(a, b%a))));
    }
  }
}

int main()
{
  int a, b;
  printf("Inserire valore di a: ");
  scanf("%d", &a);
  printf("Inserire valore di b: ");
  scanf("%d", &b);

  gcd_ricorsivo(a, b);
}