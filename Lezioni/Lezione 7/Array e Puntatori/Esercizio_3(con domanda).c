#include <stdio.h>

int main(void)
{ 
  // Dichiarazione array come un puntatore
  int n, a[n];

  printf("Inserire valore n: ");
  scanf("%d", &n);

  for(int i=0; i<n; i=i+1)
  {
    printf("Inserire valore in array: ");
    scanf("%d", &a[i]);
    printf("Array di indice %d: %d\n", i, *(a+i));
    printf("Array di indice %d: %d\n", i, a[i]);
  }
  printf("Array di indice 2: %d\n", a[2]);
}

// Perché in a[2] c'è il valore 1? E perché se alla riga 20 aggiungo printf("Array di indice 2: %d\n", a[2]); l'array viene visualizzato correttamente?