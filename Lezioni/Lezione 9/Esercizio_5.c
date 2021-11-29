#include <stdio.h>

int triangolare(int N)
{
    int t[N], n=1;
    for(int i=0; i<N; i=i+1)
    {   
        t[i]=(n*(n+1))/2;
        printf("Il numero triangole n°%d nell'indice %d dell'array è: %d\n", i, i, t[i]);
        n=n+1;
    }
    return *t;
}

int main(void)
{
    int N;

    printf("Inserire il valore di N: ");
    scanf("%d", &N);
    triangolare(N);
}