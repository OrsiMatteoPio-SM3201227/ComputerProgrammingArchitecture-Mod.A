#include <stdio.h>

// ====================
//      FUNZIONI
// ====================
//  Ricerca dicotomica
// ====================
int ricerca_dicotomica(int a[], int *i, int *l, int f)
{
    int esiste; // 0 non esiste, 1 esiste
    
    int m=(i+l)/2;
    if(f != a[m])
    {
        if(i>l)
        {
            return esiste=0;
        }
        else if(f==a[m])
        {
            print("Il valore f esiste")
            if(f>a[m])
            {
                return ricerca_dicotomica(a, m+1, l, f)
            }
        }
    }
    else if(f)
    {
        if(i>l)
        {
            return esiste=0;
        }
    }
}

// ====================
//      PROGRAMMA
// ====================
//  Corpo del programma
// ====================
int main(void)
{
    int a[10]={1, 2, 3, 4, 5, 6, 7 , 8, 9, 10};
    int *i=a[0];
    int *l=[9];
    int f=5;
    int esiste;

    ricerca_dicotomica(a, i, l, f);
}