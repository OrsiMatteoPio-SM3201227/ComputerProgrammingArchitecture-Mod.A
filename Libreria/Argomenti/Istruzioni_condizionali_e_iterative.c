// Nel linguaggio C esistono comandi che permettono di eseguire determinate operazioni. Tali comandi possono essere concatenati e annidati per ottenere operazioni più complesse.

// ==============================
//      ESPRESSIONI LOGICHE
// ==============================
//        Operatori logici
// ==============================
void operatori_logici(void)
{
    disuguaglianza: <, <=, >=, >;
    uguaglianza: ==;
    diversità: !=.
}
// ==============================
//      Connettivi logici
// ==============================
void connettivi_logici(void)
{
    congiunzione: &&;
    disgiunzione: ||;
    negazione: !.
}

// ==============================
//     ISTRUZIONI CONDIZIONALI
// ==============================
//      Comando if semplice
// ==============================
void comando_if(void)
{
    if(condizione)
    {
        comando_1;
    }
    else
    {
        comando_2;
    }
}
// ==============================
//      Comando if articolato
// ==============================
void comando_if(void)
{
    if(condizione_1)
    {
        comando_1;
    }
    else if(condizione_2)
    {
        comando_2;
    }
    else
    {
        comando_3;
    }
}

// ==============================
//      ISTRUZIONI ITERATIVE
// ==============================
//    Iterazione indeterminata
//          Comando while
// ==============================
void comando_while(void)
{
    while(condizione)
    {
        comando;
    }
}
// ==============================
//    Iterazione determinata
//          Comando for
// ==============================
void comando_for(void)
{
    for(int i = 0; i < parametro; i = i + 1)
    {
        comando;
    }
}