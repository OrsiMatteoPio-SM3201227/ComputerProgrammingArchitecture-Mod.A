// Si scriva una funzione che riceva in ingresso due numeri double x ed y e restituisca 1 se e solo se i due numeri sono uguali a meno di un fattore e = 10^−9, ovvero |x − y| < ϵ e 0 in caso contrario. Il valore di e deve essere un parametro della funzione.

// ==============================
//           LIBRERIA
// ==============================
#include <stdio.h>

// ==============================
//           FUNZIONI
// ==============================
//    Uguaglianza approssimata
// ==============================
int uguaglianza(double e, double x, double y);
// ==============================

// ==============================
//           PROGRAMMA
// ==============================
//      Corpo del programma
// ==============================
int main(void)
{
    // Dichiarazione delle variabili
    double e, x, y;

    printf("Inserire il valore di e: ");
    scanf("%lf", &e);
    printf("Inserire il valore di x: ");
    scanf("%lf", &x);
    printf("Inserire il valore di y: ");
    scanf("%lf", &y);
    

    // Richiamo della funzione uguaglianza
    if(uguaglianza(e, x, y) == 0)
    {
        printf("I due numeri %lf e %lf non sono approssimativamente uguali per il fattore e = %lf\n", x, y, e);
    }
    else if(uguaglianza(e, x, y) == 1)
    {
        printf("I due numeri %lf e %lf sono approssimativamente uguali per il fattore e = %lf\n", x, y, e);
    }
}

// ==============================
//           FUNZIONI
// ==============================
//    Uguaglianza approssimata
// ==============================
int uguaglianza(double e, double x, double y)
{
    if(x - y < 0)
    {
        if(((x - y) * (-1)) <= e)
        {
            return 1;
        }
        else if(((x - y) * (-1)) > e)
        {
            return 0;
        } 
    }
    else if(x - y > 0)
    {
        if((x - y) <= e)
        {
            return 1;
        }
        else if((x - y) > e)
        {
            return 0;
        }
    }
}