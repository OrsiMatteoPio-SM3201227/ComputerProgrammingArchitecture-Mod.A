#include <stdio.h>

int divisore(int a[], int dim)
{
    int trovato=1;
    
    for(int i=0; i<dim; i=i+1)
    {   
        if(a[i+1]%a[i]!=0 && !trovato)
        {
            trovato=0;
        }
    }
    return trovato;
}

int main(void)
{
    int a[5]={10, 20, 30, 40, 50};

    printf("%d", divisore(a, 5));
}