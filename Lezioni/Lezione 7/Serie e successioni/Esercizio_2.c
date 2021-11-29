#include <stdio.h>

float ricorsiva(int n, int p)
{
  if(n==1)
  {
    return p;
  }
  else
  {
    return(0.5*(ricorsiva(n-1, p)+p/(ricorsiva(n-1, p))));
  }
}

float iterativa(int n, int p)
{
  float a_n=p;
  float a_n1;
  for(int i=0; i<=n; i=i+1)
  {
    int a_n1=0.5*(a_n+p/a_n);
    a_n=a_n1;
  }

  return a_n;
}

int main(void)
{
  int n, p;

  printf("Inserire valore di n: ");
  scanf("%d", &n);
  printf("Inserire valore di n: ");
  scanf("%d", &p);

  printf("Iterativa: %f\n", iterativa(n, p));
  printf("Ricorsiva: %f\n", ricorsiva(n, p));
  return 0;
}