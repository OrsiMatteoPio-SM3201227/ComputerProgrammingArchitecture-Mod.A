// Nel linguaggio C esiste un particolare tipo di struttura dati, denominato vettore (o array). Si tratta di una struttura dati che descrive una sequenza finita di valori, in cui si tiene conto del loro ordine di memorizzazione, tutti dello stesso tipo. Ogni elemento della sequenza è associato a una posizione (indice). L'indicizzazione comincia da 0, prosegue con indici interi positivi, e termina con un indice uguale alla dimensione dell'array decrementata di 1.

// ==============================
//            VETTORI
// ==============================
//  Dichiarazione di un vettore
// ==============================
void vettore(void)
{
    tipo vettore[dimensione];
    vettore[indice] = valore;
}
// ==============================
//      Lettura di un vettore
// ==============================
void lettura(tipo vettore[], int dimensione)
{
    for(int i = 0; i < dimensione; i = i + 1)
    {
        scanf("%d", &vettore[i]);
    }
}
// ==============================
//  Relazione puntatore-vettore
// ==============================
void relazione_puntatore_vettore(void)
{
    tipo vettore[dimensione];
    tipo * puntatore;
    tipo variabile;

    puntatore = &vettore[indice];

    // I seguenti due comandi sono equivalenti
    variabile = *(puntatore + 1);
    variabile = *(&vettore[indice + 1]);
}
// ==============================
//    Scambio valori su vettore
// ==============================
void scambia(tipo vettore[], int dimensione, tipo indice_1, tipo indice_2)
{
    if(indice_1 < dimensione && indice_2 < dimensione && indice_1 > 0 && indice_2 > 0)
    {
        tipo variabile_temporanea = vettore[indice_1];
        vettore[indice_1] = vettore[indice_2];
        vettore[indice_2] = variabile_temporanea;
    }
}
// ==============================
//        Problem solving
// ==============================
void problem_solving(void)
{
    ricerca: ricerca con e senza flag;
    proprietà globali: quantificatori universali;
    conteggio e aggregazione;
    minimo e massimo di un vettore;
}