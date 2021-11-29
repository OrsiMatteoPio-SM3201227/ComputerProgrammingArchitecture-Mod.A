#include <stdio.h>
#include <stdlib.h>

int inverso(int a[], int dim)
{
    int b[dim];
    for(int i=0; i<dim; i=i+1)
    {
        b[i]=a[dim-i];
        printf("Il valore dell'indice %d del vettore invertito è: %d\n", i, b[i]);
    }
    return b[dim];
}

int *inverso_con_malloc(int a[], int dim)
{
    int *p;
    p=malloc(sizeof(int)*dim);

    for(int i=0; i<dim; i=i+1)
    {
        *p=a[dim-i];
        printf("Il valore dell'indice %d del vettore invertito è: %d\n", i, *p);
    }
    return p;
}

int main(void)
{
    int a[5]={10, 20, 30, 40, 50};
    inverso(a, 5);
    inverso_con_malloc(a, 5);
}