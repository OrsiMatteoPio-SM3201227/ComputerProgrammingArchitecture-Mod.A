#include <stdio.h>

/* Funzione iterativa "potenza" n°1 */
int potenza_iterativa1(int a, int b)
{
  // Dichiarazione variabile d'appoggio
  int i=a;
  
  // Si distinguino i due casi: b=0 e b>0
  if(b==0)
  {
    a=a-a;
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
  // Dichiarazione variabile d'appoggio
  int i=a;
  
  // Si distinguino i due casi: b=0 e b>0
  if(b==0)
  {
    a=a-a;
  }
  else
  {
    for(int l=1; l<b; l=l+1)
    {
      a=a*i;
    }
  }
  
  // Stampa della potenza
  printf("La potenza è: %d", a);
  
  return a;
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
    return(printf("%d", a*potenza_ricorsiva(a,b-1)));
  }
  
}

int main()
{
  // Dichiarazione delle variabili
  int a, b;
  
  printf("Inserire il valore di a: ");
  scanf("%d", &a);
  printf("Inserire il valore di b: ");
  scanf("%d", &b);
  
  // Chiamata della funzione "potenza"
  potenza_ricorsiva(a,b);
  

  return 0;
}