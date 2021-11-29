#include <stdio.h>
#include <math.h>

float fun(float prezzo_iniziale, int percentuale_di_sconto)
{
  float sconto=(prezzo_iniziale/100)*percentuale_di_sconto;

  return(printf("Il prezzo scontato è: %f", prezzo_iniziale-sconto));
}

int main()
{
  float prezzo_iniziale;
  int percentuale_di_sconto;
  
  printf("Inserire il prezzo iniziale: ");
  scanf("%f", &prezzo_iniziale);
  printf("Inserire la percentuae di sconto: ");
  scanf("%d", &percentuale_di_sconto);

  fun(prezzo_iniziale,percentuale_di_sconto);
  return 0;
}