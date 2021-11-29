// Chiedere input all'utente fino a che non venga inserito un valore negativo. Si crei due liste per memorizzare l'una i numeri pari l'altra i numeri dispari. Infine si riporti quale delle due liste sia più grande e la somma totale dei valori in ciascuna lista.

struct elemento_pari {int info; struct elemento_pari*next;};
struct elemento_dispari {int info; struct elemento_dispari*next;};

typedef struct elemento_pari NumeroPari;
typedef NumeroPari*ListaDiNumeriPari;

typedef struct elemento_dispari NumeroDispari;
typedef NumeroDispari*ListaDiNumeriDispari;

int main()
{
    int input, contatore_pari=0, contatore_dispari=0, somma_pari=0, somma_dispari=0;

    ListaDiNumeriPari lista_pari=NULL;
    ListaDiNumeriDispari lista_dispari=NULL;

    ListaDiNumeriPari numero_pari=malloc(sizeof(NumeroPari));
    ListaDiNumeriDispari numero_dispari=malloc(sizeof(NumeroDispari));

    lista_pari=numero_pari;
    lista_dispari=numero_dispari;

    printf("Inserire input: ");
    scanf("%d", &input);

    while(input>=0)
    {
        if(input%2==0)
        {
            (*numero_pari).next=malloc(sizeof(NumeroPari));

            numero_pari=numero_pari->next;

            (*numero_pari).info=input;
            printf("L'elemento della lista pari è: %d\n", (*numero_pari).info);

            contatore_pari=contatore_pari+1;
            somma_pari=somma_pari+input;
        }
        else
        {
            (*numero_dispari).next=malloc(sizeof(NumeroDispari));

            numero_dispari=numero_dispari->next;

            (*numero_dispari).info=input;
            printf("L'elemento della lista dispari è: %d\n", (*numero_dispari).info);

            contatore_dispari=contatore_dispari+1;
            somma_dispari=somma_dispari+input;
        }
        
        printf("Inserire input: ");
        scanf("%d", &input);
    }

    if(contatore_pari>contatore_dispari)
    {
        printf("La ListaPari è più grande\n");
        printf("La somma totale dei valori dei numeri della ListaPari è: %d", somma_pari);
    }
    else
    {
        printf("La ListaDispari è più grande\n");
        printf("La somma totale dei valori dei numeri della ListaDispari è: %d", somma_dispari);
    }
}
