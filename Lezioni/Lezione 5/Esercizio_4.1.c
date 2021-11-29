#include <stdio.h>

/* Funzione "minimo" */
int minimo(int x, int y, int z)
{
  if(x<y && x<z)
  {
    return(printf("Il minimo è: %d\n", x));
  }
  else
    {
      if(y<z)
      {
        return(printf("Il minimo è: %d\n", y));
      }
      else
      {
        return(printf("Il minimo è: %d\n", z));
      }
    }
}


int main()
{
  // Dichiarazione delle variabili
  int x, y, z;
  
  printf("Inserire il valore di x: ");
  scanf("%d", &x);
  printf("Inserire il valore di y: ");
  scanf("%d", &y);
  printf("Inserire il valore di z: ");
  scanf("%d", &z);
  
  // Chiamata della funzione "minimo"
  minimo(x,y,z);

  // Dichiarazione di w
  if(x>y)
  {
    for(int w=1; w<=x; w=w+1)
    {
      minimo(x,y,w);
    }
  }
  else
  {
    for(int w=1; w<=y; w=w+1)
    {
      minimo(x,y,w);
    }
  }

  return 0;
}