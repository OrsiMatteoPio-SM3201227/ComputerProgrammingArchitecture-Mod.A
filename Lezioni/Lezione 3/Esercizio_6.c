#include <stdio.h>

int main(void)
{
  // Dichiarazione delle variabili
   float a;

   printf("Inserire valore a: ");
   scanf("%f", &a);

   // Segno del valore
   if(a>=0)
   {
     if(a==0)
     {
       printf("Numero nullo\n");
     }
     else
     {
       printf("Numero positivo\n");
     }
   }
   else
   printf("Numero negativo\n");

   // Valore assoluto
   if(a<0)
   {
     a=a*(-1);
   }
   printf("Valore assoluto: %f", a);

  return 0;
}