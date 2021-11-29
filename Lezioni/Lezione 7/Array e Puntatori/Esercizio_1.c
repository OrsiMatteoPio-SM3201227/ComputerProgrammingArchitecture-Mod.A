#include <stdio.h>

float var(int a[], int dim)
{
  int somma;
  float media=0, varianza;
  
  for(int i=0; i<dim; i=i+1)
  {
    media=media+a[i];
  }
  media=media/dim;

  for(int i=0; i<dim; i=i+1)
  {
    somma=somma+(a[i]-media)*(a[i]-media);
  }

  return(printf("%f", varianza=somma/dim));
}

int main(void)
{
  int a[5];
  
  for(int i=0; i<5; i=i+1)
  {
    scanf("%d", &a[i]);
  }
  var(a, 5);
}

