// Scrivere la miglior versione possibile della funzione numero primo (per numeri interi positivi) in modo iterativo e in modo ricorsivo. Realizzare anche un programma di testing.

// ==============================
//           LIBRERIA
// ==============================
#include <stdio.h>

// ==============================
//           FUNZIONI
// ==============================
//      Numero primo iterativo
// ==============================
void numeroprimo_iterativo(int numero);
// ==============================
//      Numero primo ricorsivo
// ==============================
void numeroprimo_ricorsivo(int numero, int divisore);

// ==============================
//           PROGRAMMA
// ==============================
//      Corpo del programma
// ==============================
int main(void)
{
    // Dichiarazione della variabile
    int numero;

    printf("Inserire il valore del numero: ");
    scanf("%d", &numero);

    // Richiamo della funzione numero primo iterativa
    printf("Secondo la funzione iterativa: \n");
    numeroprimo_iterativo(numero);
    // Richiamo della funzione fattoriale ricorsiva
    printf("Secondo la funzione ricorsiva: \n");
    numeroprimo_ricorsivo(numero, 1);
}

// ==============================
//           FUNZIONI
// ==============================
//     Numero primo iterativo
// ==============================
void numeroprimo_iterativo(int numero)
{
    // Se divisibile = 0, allora il numero non è un numero primo. Se divisibile = 1, allora il numero è un numero primo.
    int divisibile = 1;
    
    if(numero <= 0)
    {
        printf("Si può verificare che tale numero è un numero primo se e solo se è un numero intero positivo\n");
    }
    else if(numero > 0)
    {
        for(int i = 1; i <= numero; i = i + 1)
        {
            if(numero % i == 0)
            {
                printf("Il numero %d è divisibile per %d\n", numero, i);
                if(i != 1 && i != numero)
                {
                    divisibile = 0;
                }
            }
        }

        if(divisibile == 0)
        {
            printf("Il numero %d non è un numero primo\n", numero);
        }
        else if(divisibile == 1)
        {
            printf("Il numero %d è un numero primo\n", numero);
        }
    }  
}
// ==============================
//      Numero primo ricorsivo
// ==============================
void numeroprimo_ricorsivo(int numero, int divisore)
{
    if(numero <= 0)
    {
        printf("Si può verificare che tale numero è un numero primo se e solo se è un numero intero positivo\n");
    }
    else if(numero > 0)
    {
        if(numero == 1 || numero == 2 || numero == 3)
        {
            printf("Il numero %d è un numero primo\n", numero);
        }
        else if(numero > 3)
        {
            if(numero % 2 == 0)
            {
                printf("Il numero %d non è un numero primo\n", numero);
            }
            else if(numero % ((2 * divisore)+1) != 0)
            {
                numeroprimo_ricorsivo(numero, divisore +1);
            }
            else
            {
                printf("Il numero %d è un numero primo\n", numero);
            }
        }
    }
}