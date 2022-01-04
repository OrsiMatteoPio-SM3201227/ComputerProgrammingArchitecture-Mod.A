// Nel linguaggio C per gestire programmi intrinsecamente dinamici è necessaria una memoria "dinamica", denominata heap. Si tratta di una parte diversa della memoria in cui le variabili non vengono allocate dai blocchi, ma tramite delle operazioni fatte esplicitamente dal programma. In particolare, si tratta di una tabella di associazione <locazione, valore>, che non possiede frames, con indirizzi diversi da quelli dello stack della memoria "statica". Non essendoci un meccanismo implicito di gestione dello heap, occorre gestire la memoria dinamica esplicitamente. Per farlo, si utilizzano funzioni presenti nella libreria standard <stdlib.h>. La memoria dinamica si alloca mediante diversi tipi di funzioni - tutte che appartengono a un'unica grande famiglia - ma di seguito si utilizza esclusivamente la funzione malloc(). Questa, come altre funzioni, crea una nuova variabile nello heap e restituisce un puntatore alla variabile. La funzione malloc() richiede in input la quantità di memoria richiesta, che dipende dal tipo di variabile che si crea e può essere calcolata tramite la funzione sizeof(nome_tipo). Si noti che le variabili memorizzate nello heap non sono soggette alla regola di scoping classica, ovvero sopravvivono dopo la chiusura di un blocco. In caso di gestione inappropriata si creano dei cosiddetti "memory leaks". Allocazioni successive e conseguenti riassegnamenti fanno perdere il reference della zona di memoria, ma la memoria rimane allocata. La memoria dinamica che resta allocata ma il cui indirizzo non è più accessibile (perché nessuna variabile lo contiene) si chiama garbage. Nel linguaggio C non esiste alcuno strumento che permette di risolvere questo problema - come accade, invece, in altri linguaggi di programmazione. Bisogna dunque deallocare la memoria dinamica tramite la funzione free(), che prende in input un puntatore a una zona di memoria allocata con malloc, e la libera. Tale zona di memoria non sarà più accessibile.

// ==============================
//        MEMORIA DINAMICA
// ==============================
//      Allocazione dinamica
// ==============================
#include <stdlib.h>
void allocazione_dinamica(void)
{
    // Allocazione con cast esplicito
    tipo * puntatore = (tipo *)malloc(sizeof(tipo));

    // Allocazione con cast implicito (o senza cast)
    tipo * puntatore = malloc(sizeof(tipo));

    free(puntatore);
}
// ==============================
// Allocazione dinamica di un array
// ==============================
void allocazione_dinamica_array(void)
{
    tipo variabile;

    scanf("%tipo", &variabile);

    puntatore = malloc(sizeof(tipo) * variabile);

    free(puntatore);
}