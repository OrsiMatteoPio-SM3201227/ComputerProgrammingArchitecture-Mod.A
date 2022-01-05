// Si scriva un programma che legga due valori interi, calcoli la loro somma e media aritmetica, e le stampi a schermo.

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
    int addendo_1, addendo_2;
    int somma;
    float media;

    printf("Inserire il valore del primo numero: ");
    scanf("%d", &addendo_1);
    printf("Inserire il valore del secondo numero: ");
    scanf("%d", &addendo_2);

    // Calcolo della somma
    somma = addendo_1 + addendo_2;
    printf("La somma dei numeri %d e %d è: %d\n", addendo_1, addendo_2, somma);

    // Calcolo della media aritmetica
    media = (addendo_1 + addendo_2) / 2.0;
    printf("La media aritmetica dei numeri %d e %d è: %f\n", addendo_1, addendo_2, media);
}