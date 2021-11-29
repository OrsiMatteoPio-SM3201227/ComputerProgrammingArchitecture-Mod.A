#include <stdio.h>
#include <stdlib.h>

// --- FUNZIONI ---
int fattoriale(int k);
float potenza(int x, int k);
float serie_iterativa(int x, int n);
float serie_ricorsiva(int x, int n);
float serie_array(int x, int n);

// --- PROGRAMMA PRINCIPALE ---
int main(int arg, char **argv)
{
    printf("Il fattoriale è: %d\n", fattoriale(5));
    printf("La potenza è: %f\n", potenza(5, 3));
    printf("La serie iterativa è: %f\n", serie_iterativa(5, 3));
    printf("La serie ricorsiva è: %f\n", serie_ricorsiva(5, 3));
    serie_array(5, 3);
}

// --- CORPO DELLE FUNZIONI ---
int fattoriale(int k)
{
    if(k==0 || k==1)
    {
        return 1;
    }
    else
    {
        return k*fattoriale(k-1);
    }
}

float potenza(int x, int k)
{
    if(k==0)
    {
        return 1.0;
    }
    else
    {
        return x*(potenza(x, k-1));
    }
}

float serie_iterativa(int x, int n)
{
    float sommatoria=0;

    for(int k=0; k<=n; k=k+1)
    {
        sommatoria=sommatoria+(potenza(x, k)/fattoriale(k));
    }
    return sommatoria;
}

float serie_ricorsiva(int x, int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return (potenza(x, n)/fattoriale(n))+serie_ricorsiva(x, n-1);
    }
}

float serie_array(int x, int n)
{
    float *p=malloc(sizeof(float)*(n+1));

    for(int i=0; i<=n; i=i+1)
    {
        p[i]=serie_ricorsiva(x, i);
        printf("L'elemento nella posizione d'indice %d dell'array è: %f\n", i, p[i]);
    }
    return *p;
}