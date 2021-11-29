#include <stdio.h>

int main(void)
{
  // Dichiarazione delle variabili
  int n, input, massimo, minimo;

  printf("Inserire valore di n: \n");
  scanf("%d", &n);

  for(int i=1; i<n; i=i+1)
  {
    printf("Inserire input: ");
    scanf("%d", &input);
    if(i==1)
    {
      minimo=input;
      massimo=input;
    }
    else 
    {
      if(input>massimo) 
      {
        massimo=input;
      }
      else
      {
        if(input<minimo)
        {
          minimo=input;
        }
      }
    ;}

  }

  printf("Il massimo è: %d\n", massimo);
  printf("Il minimo è: %d\n", minimo);

  return 0;
}