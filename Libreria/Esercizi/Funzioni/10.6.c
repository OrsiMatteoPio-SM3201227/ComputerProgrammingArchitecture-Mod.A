// Si consideri il fattoriale n! = n(n − 1)! definito per n > 0 intero. • Si implementi la definizione iterativa del fattoriale; • Si implementi la definizione ricorsiva del fattoriale; • Si crei un programma che testa entrambe le versioni per i valori di input che vanno da 1 a 10. Il programma deve stabilire se entrambe le funzioni danno lo stesso risultato sempre, e stampare un messaggio adeguato.

// ==============================
//           LIBRERIA
// ==============================
#include <stdio.h>

// ==============================
//           FUNZIONI
// ==============================
//      Fattoriale iterativo
// ==============================
int fattoriale_iterativo(int numero);
// ==============================
//      Fattoriale ricorsivo
// ==============================
int fattoriale_ricorsivo(int numero);

// ==============================
//           PROGRAMMA
// ==============================
//      Corpo del programma
// ==============================
int main(void)
{
    // Dichiarazione della variabile di controllo - 0 (falso) e 1 (vero)
    int controllo = 1;

    // Richiamo delle funzioni fattoriale iterativo e ricorsivo con test per i numeri da 1 a 10
    for(int n = 1; n <= 10; n = n + 1)
    {
        printf("Fattoriale iterativo/ricorsivo di %d: %d/%d\n", n, fattoriale_iterativo(n), fattoriale_ricorsivo(n));

        if(fattoriale_iterativo(n) != fattoriale_ricorsivo(n))
        {
            controllo = 0;
        }
    }

    // Risultato del controllo
    if(controllo == 1)
    {
        printf("Le due funzioni danno sempre lo stesso risultato: vero\n");
    }
    else if(controllo == 0)
    {
        printf("Le due funzioni danno sempre lo stesso risultato: falso\n");
    }
}

// ==============================
//           FUNZIONI
// ==============================
//      Fattoriale iterativo
// ==============================
int fattoriale_iterativo(int numero)
{
    int fattoriale = 2;
    
    if(numero < 0)
    {
        printf("Non è possibile calcolare il fattoriale di un numero negativo\n");
        return 0;
    }
    else if(numero == 0 || numero == 1)
    {
        return fattoriale = 1;
    }
    else if(numero > 1)
    {
        for(int i = 2; i < numero; i = i + 1)
        {
            fattoriale = fattoriale + (fattoriale * i);
        }
        return fattoriale;
    }
}
// ==============================
//      Fattoriale ricorsivo
// ==============================
int fattoriale_ricorsivo(int numero)
{    
    if(numero < 0)
    {
        printf("Non è possibile calcolare il fattoriale di un numero negativo\n");
        return 0;
    }
    else if(numero == 0)
    {
        return 1;
    }
    else if(numero > 0)
    {
        numero = numero * fattoriale_ricorsivo(numero - 1);
        return numero;
    }
}