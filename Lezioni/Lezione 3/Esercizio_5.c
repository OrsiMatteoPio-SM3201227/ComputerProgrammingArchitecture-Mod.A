#include <stdio.h>

int main(void)
{
  // Dichiarazione delle variabili
   int a,b;

   scanf("%d", &a);
   scanf("%d", &b);

   // Stampa del valore maggiore

   if(a>b)
   {
     printf("%d\n", a);
   }
   else
   printf("%d\n", b);

  return 0;
}