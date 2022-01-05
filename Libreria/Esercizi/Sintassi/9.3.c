// Si scriva un programma capace di compiere le 4 operazioni (somma, sottrazione, moltiplicazione e divisione) tra due numeri reali inseriti da tastiera. Dopo che sono stati inseriti i due numeri, detti a e b, il programma dovrà visualizzare i quattro valori a + b, a − b, a * b, a / b. Si ipotizzi che b != 0.

// ==============================
//           LIBRERIA
// ==============================
#include <stdio.h>

// ==============================
//           PROGRAMMA
// ==============================
//      Corpo del programma
// ==============================
int main(void)
{
    // Dichiarazione delle variabili
    float a, b;
    float somma, differenza, prodotto, divisione;

    printf("Inserire il valore del primo numero: ");
    scanf("%f", &a);
    printf("Inserire il valore del secondo numero: ");
    scanf("%f", &b);

    // Calcolo della somma
    somma = a + b;
    printf("La somma dei numeri %f e %f è: %f\n", a, b, somma);

    // Calcolo della differenza
    differenza = a - b;
    printf("La differenza tra i numeri %f e %f è: %f\n", a, b, differenza);

    // Calcolo del prodotto
    prodotto = a * b;
    printf("Il prodotto dei numeri %f e %f è: %f\n", a, b, prodotto);

    // Calcolo della divisione
    if(b == 0)
    {
        printf("Non è possibile eseguire una divisione per 0\n");
    }
    else
    {
        divisione = a / b;
        printf("La divisione tra i numeri %f e %f è: %f\n", a, b, divisione);
    }
}