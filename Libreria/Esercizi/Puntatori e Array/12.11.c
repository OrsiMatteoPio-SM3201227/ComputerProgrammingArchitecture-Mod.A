// Si scriva un programma che legga due stringhe da tastiera, le concateni in un’unica stringa e stampi la stringa così generata.

// ==============================
//           LIBRERIA
// ==============================
#include <stdio.h>
#include <stdlib.h>

// ==============================
//           FUNZIONI
// ==============================
//    Stringa di due stringhe
// ==============================
char * stringa_di_stringhe(char stringa1[], char stringa2[], int dimensione_stringa1, int dimensione_stringa2, int dimensione);

// ==============================
//           PROGRAMMA
// ==============================
//      Corpo del programma
// ==============================
int main(void)
{
    // Dichiarazione della variabile dimensione e allocazione dinamica di un array di interi
    int dimensione_stringa1, dimensione_stringa2, dimensione;

    printf("Inserire il valore della dimensione del primo array di stringhe: ");
    scanf("%d", &dimensione_stringa1);
    printf("Inserire il valore della dimensione del secondo array di stringhe: ");
    scanf("%d", &dimensione_stringa2);
    
    dimensione = dimensione_stringa1 + dimensione_stringa2;

    char * stringa1 = malloc(sizeof(char) * dimensione_stringa1);
    char * stringa2 = malloc(sizeof(char) * dimensione_stringa2);
    char * stringa = malloc(sizeof(char) * dimensione);

    for(int i = 0; i < dimensione_stringa1; i = i + 1)
    {
        if(i == 0)
        {
            printf("Inserire la prima stringa: ");
        }
        scanf("%c", &stringa1[i]);
    }

    for(int i = 0; i < dimensione_stringa2; i = i + 1)
    {
        if(i == 0)
        {
            printf("Inserire la seconda stringa: ");
        }
        scanf("%c", &stringa2[i]);
    }

    // Richiamo della funzione array stringa di due stringhe
    stringa = stringa_di_stringhe(stringa1, stringa2, dimensione_stringa1, dimensione_stringa2, dimensione);

    for(int i = 0; i < dimensione; i = i + 1)
    {
        printf("%c", stringa[i]);
    }
}

// ==============================
//           FUNZIONI
// ==============================
//    Stringa di due stringhe
// ==============================
char * stringa_di_stringhe(char stringa1[], char stringa2[], int dimensione_stringa1, int dimensione_stringa2, int dimensione)
{
    char * stringa = malloc(sizeof(char) * dimensione);

    int i, j;

    for(i = 0; stringa1[i] != '\0'; i = i + 1)
    {
        if(stringa1[i] != '\n')
        {
            stringa[i] = stringa1[i];
        }
    }

    for( j = 0; stringa2[j] != '\0'; j = j + 1)
    {
        if(stringa2[j] != '\n')
        {
            stringa[i + j] = stringa2[j];
        }
    }
    return stringa;
}