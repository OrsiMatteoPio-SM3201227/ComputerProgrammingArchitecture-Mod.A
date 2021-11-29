// Creare una lista con i primi N numeri;

#include <stdio.h>
#include <stdlib.h>

struct elemento {int info; struct elemento*next;};

typedef struct elemento NumeroDiLista;
typedef NumeroDiLista*ListaDiNumeri;

int main()
{
    int N; ListaDiNumeri lista=NULL;
    
    printf("Inserire valore di N: ");
    scanf("%d", &N);
    
    ListaDiNumeri new=malloc(sizeof(NumeroDiLista));
    lista=new;
    (*new).info=1;

    for(int i=1; i<=N; i=i+1)
    { 
        (*new).next=malloc(sizeof(NumeroDiLista));

        new=new->next;

        (*new).info=i;
        printf("L'elemento %d della lista è: %d\n", i, (*new).info);
    }
    new->next=NULL;
}