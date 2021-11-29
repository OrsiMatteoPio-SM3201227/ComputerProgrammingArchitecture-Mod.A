#include <stdio.h>

// --- FUNZIONI ---
int successione_ricorsiva(int n);
int successione_analitica(int n);
int successione_iterativa(int n);

// --- PROGRAMMA PRINCIPALE ---
int main(int arg, char **argv)
{
  int n;

  printf("Inserie il valore di n: ");
  scanf("%d", &n);

  printf("Il valore della successione calcolata ricorsivamente per il numero %d è: %d\n", n, successione_ricorsiva(n));
  printf("Il valore della successione calcolata analiticamente per il numero %d: %d\n", n, successione_analitica(n));
  printf("Il valore della successione calcolata iterativamente per il numero %d: %d\n", n, successione_iterativa(n));
}

// --- CORPO DELLE FUNZIONI ---
int potenza(int base, int esponente)
{
    if(esponente==0)
    {
        return 1;
    }
    else
    {
        return base*(potenza(base, esponente-1));
    }
}

int successione_ricorsiva(int n)
{   
    if(n==0)
    {
        return 3;
    }
    else
    {
        return (2*successione_ricorsiva(n-1)+potenza(2, n));
    }

}

int successione_analitica(int n)
{
    return 3*potenza(2, n)+n*potenza(2, n);
}

int successione_iterativa(int n)
{
    int a=3;
    
    for(int i=1; i<=n; i=i+1)
    {
        a=2*a+potenza(2, i);
    }
    return a;
}