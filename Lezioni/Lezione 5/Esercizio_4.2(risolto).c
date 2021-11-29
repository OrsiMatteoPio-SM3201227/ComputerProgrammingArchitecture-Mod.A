#include <stdio.h>


int potenza_iterativa1(int a, int b)
{
  int i=a;
  
  if(b==0)
  {
    return(1);
  }
  else
  {
    while(b>1)
    {
      b=b-1;
      a=a*i;
    }
  }

  printf("La potenza è: %d", a);

  return a;
}

/* Funzione iterativa "potenza" n°2 */
int potenza_iterativa2(int a, int b)
{
  int i=1;

  if(b==0)
  {
    return(1);
  }
  else
  {
    for(int i=0; i<b; i=i+1)
    {
      i=i*a;
    }
  }
  return i;
}

/* Funzione ricorsiva "potenza" */
int potenza_ricorsiva(int a, int b)
{
  if(b==0)
  {
    return 1;
  }
  else
  {
    return(a*potenza_ricorsiva(a,b-1));
  }
}

int main()
{
  for(int a=1; a<=5; a=a+1)
  {
    for(int b=1; b<=5; b=b+1)
    {
      printf("Ricorsiva: %d\n", potenza_ricorsiva(a,b));
      printf("Iterativa: %d\n", potenza_iterativa2(a,b));
    }
  }

  return 0;
}