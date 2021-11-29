#include <stdio.h>
#include <math.h>

double distanza(double x1, double y1, double x2, double y2)
{
  return(printf("La distanza tra i due punti è: %f", sqrt((x1-x2)*(x1-x2)+(y1-y2)+(y1-y2))));
}

int main()
{
  float x1, x2, y1, y2;

  printf("Inserire valore x di p1: ");
  scanf("%f", &x1);
  printf("Inserire valore y di p1: ");
  scanf("%f", &y1);
  printf("Inserire valore x di p2: ");
  scanf("%f", &x2);
  printf("Inserire valore y di p2: ");
  scanf("%f", &y2);

  distanza(x1,y1,x2,y2);

  return 0;
}