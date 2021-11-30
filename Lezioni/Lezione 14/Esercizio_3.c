// Creare una funzione che cancelli l'elemento in testa a una lista. Disegnare la memoria.

// --- FUNZIONI ---
//
// Lista
struct elemento{int info; struct elemento*next;};
typedef struct elemento ElementoDiLista;
typedef ElementoDiLista*ListaDiElementi;
// Cancella
void delT(ListaDiElementi*l);

// --- PROGRAMMA PRINCIPALE ---
int main(void)
{
    ListaDiElementi lista=[1, 2, 3, 4];
    delT(&lista)
    printf("Il primo elemento della lista è: %d", (*lista).info);
}

// --- CORPO FUNZIONI ---
//
// Cancella
void delT(ListaDiElementi*l)
{
    if(*l!=NULL)
    {
        ListaDiElementi old=*l;
        *l=l->next;
        free(old);
    }
}