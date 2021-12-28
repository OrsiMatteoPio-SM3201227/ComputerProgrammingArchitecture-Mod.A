#include <stdio.h>
#include <stdlib.h>

// ==============================
//          FUNZIONI
// ==============================
//            Lista
// ==============================
struct elemento{int info; struct elemento*next;};
typedef struct elemento ElementoDiLista;
typedef ElementoDiLista*ListaDiElementi;
// ==============================
//      Compilazione lista
// ==============================
int compilazione_lista(int a[], int dim)
{
    int N; ListaDiElementi lista=NULL;

    ListaDiElementi new=malloc(sizeof(ElementoDiLista));

    lista=new;

    printf("Inserire input: ");
    scanf("%d", &input);

    for(int i=1; i<=N; i=i+1)
    {
        (*new).next=malloc(sizeof(ElementoDiLista));

        new=new->next;

        (*new).info=input;
        printf("L'elemento %d della lista è: %d\n", i, (*new).info);
    }
    new->next=NULL;
}

// ==============================
//          PROGRAMMA
// ==============================
//      Corpo del programma
// ==============================
int main(int arg, char **argv)
{
    int *a;
    a=malloc(sizeof(int)*dim)
}