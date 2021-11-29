#include <stdio.h>

int main(void)
{
  // Dichiarazione delle variabili
   int A,B;

   printf("Inserire valore A: ");
   scanf("%d", &A);
   printf("Inserire valore B: ");
   scanf("%d", &B);

   // 1. Positività o Negatività di B
   if(B>0)
   {
     if(B==0)
     {
       printf("B è un numero nullo\n");
     }
     else
     {
       printf("B è un numero positivo\n");
     }
   }
   else
   {
     printf("B è un numero negativo\n");
   }

   // 2. Parità o Disparità di A
   if(A%2==0)
   {
     printf("A è un numero pari\n");
   }
   else
   {
     printf("A è un numero dispari\n");
   }

   // 3. Somma di A e B
   int somma=A+B;
   printf("Somma: %d\n", somma);

   // 4. Valore massimo
   int massimo;
   printf("Per ottenere il valore massimo si considerino i valori assoluti di A e B, dunque si scelga il segno +\n");
   if(A<0)
   {
     A=A*(-1);
   }
   if(B<0)
   {
     B=B*(-1);
   }
   massimo=A+B;
   printf("Valore massimo: %d\n", massimo);

  return 0;
}