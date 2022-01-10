// Si considerino due interi a > 0, b > 0, a < b. Si scriva una funzione che visualizza, tramite printf, i numeri nell’intervallo generalizzando la seguente regola: • a = 1, b = 6 → 1, 3, 5; • a = 2, b = 11 → 2, 4, 6, 8, 10. Si noti che la funzione non restituisce alcune valore. Si testi la funzione su valori di a e b dati in input dall’utente mediante scanf.

// ==============================
//           LIBRERIA
// ==============================
#include <stdio.h>

// ==============================
//           FUNZIONI
// ==============================
//      Intervallo di numeri
// ==============================
void intervallo_numeri(int a, int b);

// ==============================
//           PROGRAMMA
// ==============================
//      Corpo del programma
// ==============================
int main(void)
{
    // Dichiarazione delle variabili
    int a, b;

    printf("Inserire il valore di a: ");
    scanf("%d", &a);
    printf("Inserire il valore di b: ");
    scanf("%d", &b);

    // Richiamo della funzione intervallo di numeri
    intervallo_numeri(a, b);
}

// ==============================
//           FUNZIONI
// ==============================
//      Intervallo di numeri
// ==============================
void intervallo_numeri(int a, int b)
{
    if(a <= 0 || b <= 0)
    {
        printf("I valori di a e b devono essere entrambi maggiori di 0");
    }
    else if(a > b)
    {
        printf("a è maggiore di b, dunque si considererà d'ora in poi l'intervallo [%d, %d]\n", b, a);

        if(b % 2 == 0)
        {
            printf("La successione di numeri pari nell'intervallo [%d, %d] è: ", b, a);
            for(int i = b; i <= a; i = i + 2)
            {
                if(i + 2 <= a)
                {
                    printf("%d,", i);
                }
                else if(i + 2 > a)
                {
                    printf("%d.", i);
                }
            }
        }
        else
        {
            printf("La successione di numeri dispari nell'intervallo [%d, %d] è: ", b, a);
            for(int i = b; i <= a; i = i + 2)
            {
                if(i + 2 <= a)
                {
                    printf("%d,", i);
                }
                else if(i + 2 > a)
                {
                    printf("%d.", i);
                }
            }
        }
    }
    else if(a < b)
    {
        printf("a è minore di b, dunque si considererà l'intervallo [%d, %d]\n", a, b);

        if(a % 2 == 0)
        {
            printf("La successione di numeri pari nell'intervallo [%d, %d] è: ", a, b);
            for(int i = a; i <= b; i = i + 2)
            {
                if(i + 2 <= b)
                {
                    printf("%d,", i);
                }
                else if(i + 2 > b)
                {
                    printf("%d.", i);
                }
            }
        }
        else
        {
            printf("La successione di numeri dispari nell'intervallo [%d, %d] è: ", a, b);
            for(int i = a; i <= b; i = i + 2)
            {
                if(i + 2 <= b)
                {
                    printf("%d,", i);
                }
                else if(i + 2 > b)
                {
                    printf("%d.", i);
                }
            }
        }
    }
}