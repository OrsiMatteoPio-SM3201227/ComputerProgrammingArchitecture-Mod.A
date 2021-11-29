#include <stdio.h>

int *ordine(int a[], int dim)
{
    for(int i=0; i<dim; i=i+1)
    {
        if(a[i+1]<a[i])
        {
            a[i]=a[i+1];
            printf("Il valore nell'indice %d dell'array è: %d\n", i, a[i]);
        }
    }
    return a;
}

int main(void)
{
    int a[5]={50, 40, 30, 20, 10};
    ordine(a, 5);
}