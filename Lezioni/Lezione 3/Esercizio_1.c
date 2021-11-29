#include <stdio.h>

int main(void)
{
  // Dichiarazione delle variabili
  int x, y, somma;
  float media;

  printf("Inserire valore x: ");
  scanf("%d", &x);
  printf("Inserire valore y: ");
  scanf("%d", &y);

  // Operazione di somma
  somma=x+y;
  printf("Somma: %d\n", somma);

  // Operazione di media aritmetica
  media=(x+y)/2;
  printf("Media aritmetica: %f\n", media);

  return 0;
}