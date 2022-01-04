// Nel linguaggio C esiste un particolare tipo di struttura dati, denominato lista linkata. Si tratta di una lista di elementi collegati (dello steso tipo) che può avere dimensione variabile (crescere indefinitivamente). Gli elementi di una lista linkata sono collegati attraverso un puntatore; l'espressione "linked list" significa proprio che ogni elemento contiene un puntatore al successivo. Il caso speciale dell'ultimo elemento viene gestito da un valore particolare. Essendo una struttura dati dinamica, una lista linkata è allocata dinamicamente nello heap, in celle di memoria non necessariamente contigue. Inoltre, al contrario dei vettori che hanno un accesso diretto, le liste hanno un accesso sequenziale: l'unico punto di accesso è il collegamento iniziale, da cui bisogna procedere camminando per accedere agli altri elementi fino al collegamento finale. Gli elementi di una lista si rappresentano con una struct, ovvero un tipo composto, costruito a partire dai tipi primitivi (int, float, double, ...). Essa rappresenta un gruppo di variabili, anche di tipo diverso, aggregate insieme sotto un unico nome. Si tratta di un tipo ricorsivo, nel senso che una struct elemento dipende da un puntatore a un'altra struct elemento, ovvero next. Si può dare un nome a una struct attraverso il comando typedef(), che crea un tipo "sintattico" utilizzabile. Il comando typedef() è puramente sintattico, nel senso che il programma a tempo di compilazione potrebbe sostituire le occorrenze di typedef() con i tipi concreti (es. struct elemento) e funzionare correttamente. Proseguendo, al fine di riferirsi alla lista generica e non a un suo elemento specifico, si può definire un puntatore che descrive il collegamento iniziale.

// ==============================
//          LISTE LINKATE
// ==============================
//      Allocazione statica
// ==============================
struct elemento
{
    // Valore memorizzato
    tipo attributo_info;

    // Collegamento al prossimo elemento (dello stesso tipo)
    struct elemento * attributo_next;
}

// Denominazione
typedef struct elemento NomeElemento;
typedef struct NomeElemento * NomePuntatoreLista;

void allocazione_statica(void)
{
    NomeElemento puntatore;

    // Accesso
    puntatore.attributo_info = valore;
    puntatore.attributo_next = NULL;
}
// ==============================
//      Allocazione dinamica
// ==============================
struct elemento
{
    // Valore memorizzato
    tipo attributo_info;

    // Collegamento al prossimo elemento (dello stesso tipo)
    struct elemento * attributo_next;
}

// Denominazione
typedef struct elemento NomeElemento;
typedef struct NomeElemento * NomePuntatoreLista;

void allocazione_dinamica(void)
{
    NomePuntatoreLista puntatore;

    puntatore = malloc(sizeof(NomeElemento));

    // Accesso con deferenziazione esplicita
    (* puntatore).attributo_info = valore;
    (* puntatore).attributo_next = NULL;

    // Accesso con deferenziazione implicita
    puntatore -> attributo_info = valore;
    puntatore -> attributo_next = NULL;
}
// ==============================
//   Inserire elemento in testa
// ==============================
struct elemento
{
    // Valore memorizzato
    int info;

    // Collegamento al prossimo elemento (dello stesso tipo)
    struct elemento * next;
}

// Denominazione
typedef struct elemento ElementoDiLista;
typedef struct ElementoDiLista * ListaDiElementi;

void addT(ListaDiElementi * l, int x)
{
    // Creazione di un nuovo collegamento iniziale
    ListaDiElementi new = malloc(sizeof(ElementoDiLista));

    // Il primo elemento contiene l'intero in input
    new -> info = x;

    // Collegamento del nuovo elemento a quello precedentemente in testa
    new -> next = * l;

    // Modifica della testa
    * l = * new;
}

int main()
{
     // Data una certa lista inizializzata (con alcuni elementi o completamente vuota), richiamo della funzione addT per aggiungere un nuovo elemento in testa
     addT(&lista, 8);
}
// ==============================
//   Inserire elemento in coda
// ==============================
struct elemento
{
    // Valore memorizzato
    int info;

    // Collegamento al prossimo elemento (dello stesso tipo)
    struct elemento * next;
}

// Denominazione
typedef struct elemento ElementoDiLista;
typedef struct ElementoDiLista * ListaDiElementi;

void addC(ListaDiElementi * l, int x)
{
    // Creazione di un nuovo elemento contenente l'intero in input;
    ListaDiElementi new = malloc(sizeof(ElementoDiLista));
    new -> info = x;
    new -> next = NULL;
    
    // Distinzione di due casi: lista vuota e non vuota
    if(* l == NULL)
    {
        // Puntatore tra il collegamento iniziale e il nuovo elemento
        * l = new;
    }
    else
    {
        // Copia del puntatore alla lista in input
        ListaDiElementi corr = *l;

        // Camminamento di tutta la lista fino all'ultimo elemento
        while(corr -> next != NULL)
        {
            corr = corr -> next;
        }

        // Cambio del collegamento per aggiungere elemento in coda
        corr -> next = new
    }
}

int main()
{
    // Data una certa lista inizializzata (con alcuni elementi o completamente vuota), richiamo della funzione addC per aggiungere un nuovo elemento in coda
    addC(&lista, 8);
}