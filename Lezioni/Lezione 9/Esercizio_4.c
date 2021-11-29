#include <stdio.h>
#include <stdlib.h>

int *somma(int *a1, int *a2, int *a3, int dim)
{
  for(int i=0; i<dim; i=i+1)
  {
    a3[i]=a1[i]+a2[i];
  }
  return a3;
}

int *somma_con_malloc(int *a1, int *a2, int dim)
{
  int *a3;
  a3=malloc(sizeof(int)*dim);
  
  for(int i=0; i<dim; i=i+1)
  {
    a3[i]=a1[i]+a2[i];
  }
  return a3;
}

int main(void)
{
  int a1[3]={1, 2, 3};
  int a2[3]={1, 2, 3};
  int a3;
  int *a4=somma(a1, a2, &a3, 3);
  int *a5=somma_con_malloc(a1, a2, 3);

  for(int i=0; i<3; i=i+1)
  {
    printf("%d\n", *(a4+i));
    printf("%d\n", *(a5+i));
  }

  return 0;
}