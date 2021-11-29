#include <stdio.h>

int main(void)
{
  // Dichiarazione delle variabili
  float A, B, somma, sottrazione, moltiplicazione, divisione;

  printf("Inserire valore A: ");
  scanf("%f", &A);
  printf("Inserire valore B: ");
  scanf("%f", &B);
  
  // Somma di A e B
  somma=A+B;
  printf("Somma: %f\n", somma);

  // Sottrazione di A e B
  sottrazione=A-B;
  printf("Sottrazione: %f\n", sottrazione);

  // Moltiplicazione di A e B
  moltiplicazione=A*B;
  printf("Moltiplicazione: %f\n", moltiplicazione);

  // Divisione di A e B
  divisione=A/B;
  printf("Divisione: %f\n", divisione);

  return 0;
}