// Nel linguaggio C esiste un particolare strumento, denominato puntatore. Si tratta di una variabile, il cui valore è un indirizzo di memoria (o locazione).

// ==============================
//          PUNTATORI
// ==============================
void puntatore(void)
{
    tipo * puntatore;
    puntatore = &variabile;
}
// ==============================
//    Scambio tramite puntatore
// ==============================
void scambia(tipo * puntatore_1, tipo * puntatore_2)
{
    tipo variabile_temporanea = puntatore_1;
    puntatore_1 = puntatore_2;
    puntatore_2 = variabile_temporanea;
}