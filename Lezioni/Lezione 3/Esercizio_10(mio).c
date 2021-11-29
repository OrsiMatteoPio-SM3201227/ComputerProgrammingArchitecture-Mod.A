#include <stdio.h>

int main(void)
{
  // Dichiarazione delle variabili
  int n, input, massimo, minimo;

  printf("Inserire valore di N: ");
  scanf("%d", &n);

  // Costruzione dell'insieme di N numeri
  for(int i=1; i<=n; i=i+1)
  {
    printf("Inserire numero: ");
    scanf("%d", &input);

    // Calcolo del Massimo e del Minimo
    if(i==1)
    {
      massimo=input;
      minimo=input;
    }
    else
    {
      if(input>massimo)
      {
        massimo=input;
      }
      else
      {
        minimo=input;
      }
    }
  }

  // Stampa dei valori richiesti
  printf("Il valore di N è: %d\n", n);
  printf("Il Massimo dei numeri è: %d\n", massimo);
  printf("Il Minimo dei numeri è: %d\n", minimo);

  return 0;
}