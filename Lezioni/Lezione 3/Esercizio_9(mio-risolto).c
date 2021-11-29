#include <stdio.h>

int main(void)
{  
   // Dichiarazione delle variabili
   float numero, somma=0, media;
   int conta=0;

   printf("Inserire numero: ");
   scanf("%f", &numero);

   // Serie di numeri
   while(numero!=0)
   {
     // Aggiornamento della Somma
     somma=somma+numero;
     
     // Aggiornamento della Conta
     conta=conta+1;

     // Aggiornamento del Numero
     printf("Inserire numero: ");
     scanf("%f", &numero);
   }

   // Calcolo della Media aritmetica
   media=somma/conta;

   // Stampa della Somma e della Media aritmetica
   printf("Somma dei numeri: %f\n", somma);
   printf("Media arimetica dei numeri: %f\n", media);

  return 0;
}