#include <stdio.h>
#include <stdlib.h>

int controllo(int a[], int dim)
{
    int trovato=1;
    for(int i=0; i<dim; i=i+1)
    {
        if(a[i]==a[i+1] && trovato)
        {
            trovato=0;
        }
    }
    return(printf("L'array contiene valori diversi? %d", trovato));
}

int main(void)
{
    int a[5]={10, 20, 30, 40, 50};
    controllo(a, 5);
}