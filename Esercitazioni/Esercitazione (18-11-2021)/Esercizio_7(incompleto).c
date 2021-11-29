#include <stdio.h>

// --- FUNZIONI ---
int minore_somma(int a[], int dim);

// --- PROGRAMMA PRINCIPALE ---
int main(int arg, char **argv)
{
  int a[10]={2, 1, 2, 4, 7, 12, 9, 33, 2, 60};
  int b[10]={4, 2, 5, 3, 16, 32, 2, 12, 34, 21};

  printf("Valore della proprietà per l'array a: %d\n", minore_somma(a, 10));
  printf("Valore della proprietà per l'array b: %d\n", minore_somma(b, 10));
}

// --- CORPO DELLE FUNZIONI ---
int minore_somma(int a[], int dim)
{   
    int proprietà, sommatoria;
    for(int i=0; i<10; i=i+1)
    {
        for(int j=0; j<i-1; j=j+1)
        {
            sommatoria=sommatoria+a[j];
            if(a[i]<sommatoria)
            {
                proprietà=1;
            }
            else
            {  
                proprietà=0;
            }
        }
    }
    return proprietà;
}