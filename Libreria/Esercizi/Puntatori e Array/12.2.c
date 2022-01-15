// Si scriva una funzione che data la somma e la differenza delle basi di un trapezio ne calcoli l’area, sapendo che l’altezza è 2 / 3 della base minore. La funzione dovrà avere la segnatura: void area(int somma, int differenza, float * area).

// ==============================
//           LIBRERIA
// ==============================
#include <stdio.h>

// ==============================
//           FUNZIONI
// ==============================
//             Area
// ==============================
void area(int somma, int differenza, float * area);

// ==============================
//           PROGRAMMA
// ==============================
//      Corpo del programma
// ==============================
int main(void)
{
    // Dichiarazione delle variabili
    int somma, differenza;
    float area_trapezio;

    printf("Inserire il valore della somma delle basi: ");
    scanf("%d", &somma);
    printf("Inserire il valore della differenza delle basi: ");
    scanf("%d", &differenza);

    // Richiamo della funzione area
    area(somma, differenza, &area_trapezio);
    printf("Il valore dell'area del trapezio è: %f", area_trapezio);
}

// ==============================
//           FUNZIONI
// ==============================
//             Area
// ==============================
void area(int somma, int differenza, float * area)
{
    float altezza = (somma - differenza) / 3.0;
    * area = (somma * altezza) / 2.0;
}