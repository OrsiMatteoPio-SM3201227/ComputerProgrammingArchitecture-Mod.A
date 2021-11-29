#include <stdio.h>
#include <math.h>

double fun(double x, double y)
{
  if(x==y)
  {
    return(1);
  }
  else
  {
    return(0);
  }
}

int main()
{
  double x,y;
  
  printf("Inserire il valore di x: ");
  scanf("%lf", &x);
  printf("Inserire il valore di y: ");
  scanf("%lf", &y);

  fun(x,y);
  return 0;
}