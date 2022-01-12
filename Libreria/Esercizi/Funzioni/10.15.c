// Vogliamo convertire un numero da una base numerica all’altra. L’algoritmo per convertire un intero n > 0 da base decimale a base binaria è il seguente: 1. calcolare la divisione intera n' = n / 2 con resto r'; 2. r' è la cifra più a destra nella rappresentazione binaria di n, chiamiamola c0; 3. si divide ancora n'' = n' / 2 con resto r'' ed otteniamo la seconda cifra r'' = c1; 4. si ripete il procedimento fino a quando il risultato della divisione è uguale a 0, ottenendo la rappresentazione binaria di n concatenando le cifre ci come ckck-1...c0. Mentre l’algoritmo inverso si basa sul fatto che n = c020 + c121 + ... ck2k: • scrivere una funzione che, preso in input un numero intero in base decimale, lo converta in base binaria; • scrivere la funzione di conversione inversa; • testare le funzioni così definite sui numeri da 1 a 100. Nota: Non sapendo ancora come memorizzare sequenze di bits 0/1 di lunghezza arbitraria, si consideri che per convertire un numero < 100 in binario servono al più log2(100) bits.

// ==============================
//           LIBRERIA
// ==============================
#include <stdio.h>

// ==============================
//           FUNZIONI
// ==============================
//      Conversione binaria
// ==============================
int conversione_binaria(int numero);
// ==============================
//     Conversione decimale
// ==============================
int conversione_decimale(int numero);
// ==============================
//        Potenza ricorsiva
// ==============================
float potenza_ricorsiva(int base, int esponente);

// ==============================
//           PROGRAMMA
// ==============================
//      Corpo del programma
// ==============================
int main(void)
{
    // Dichiarazione delle variabili
    int binario, decimale;

    // Richiamo delle funzioni conversione binaria e decimale con test per i numeri da 1 a 100
    for(int n = 1; n <= 100; n = n + 1)
    {
        binario = conversione_binaria(n);
        decimale = conversione_decimale(binario);

        printf("Numero decimale inserito -> Conversione binaria -> Riconversione decimale: %d -> %d -> %d\n", n, binario, decimale);
    }
}

// ==============================
//           FUNZIONI
// ==============================
//      Conversione binaria
// ==============================
int conversione_binaria(int numero)
{
    int resto;
    int somma = 0;
    int conto = 0;
    
    while(numero != 0)
    {
        resto = numero % 2;
        numero = numero / 2;

        somma = somma + (resto * potenza_ricorsiva(10, conto));
        conto = conto + 1;
    }
    return somma;
}
// ==============================
//     Conversione decimale
// ==============================
int conversione_decimale(int numero)
{
    int esponente = 0;
    int somma = 0;

    while(numero != 0)
    {
        if(numero % 10 != 0)
        {
            somma = somma + potenza_ricorsiva(2, esponente);
        }
        numero = numero / 10;
        esponente = esponente + 1;
    }
    return somma;
}
// ==============================
//        Potenza ricorsiva
// ==============================
float potenza_ricorsiva(int base, int esponente)
{
    if(esponente < 0)
    {
        return 1/(base * potenza_ricorsiva(base, ((esponente * (- 1))-1)));
    }
    else if(esponente == 0)
    {
        return 1;
    }
    else if(esponente == 1)
    {
        return base;
    }
    else if(esponente > 0)
    {
        return base * potenza_ricorsiva(base, esponente - 1);
    }
}