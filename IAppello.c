// ==============================
//    I APPELLO - GENNAIO 2022
// ==============================

// ==============================
//     ESERCIZI DI SBARRAMENTO
//           (18 punti)
// ==============================
//          A1 (6 punti)
// ==============================
int myfun_iter(int n);
int myfun_rec(int n);

int myfun_iter(int n)
{
    int an2 = -1, an1 = 0, an;
    
    if(n < 1)
    {
        printf("Input n non valido\n");
        return 0;
    }
    else if(n >= 1)
    {
        if(n == 1)
        {
            an = -1;
        }
        else if(n == 2)
        {
            an = 0;
        }
        else if(n > 2)
        {
            for(int i = 3; i <= n; i = i + 1)
            {
                if(i % 2 == 0)
                {
                    an = ((an2 / 2) - an1 + 1);
                    an2 = an1;
                    an1 = an;
                }
                else
                {
                    an = ((2 * i) + an1 + 1 + (2 * an2));
                    an2 = an1;
                    an1 = an;
                }
            }
        }
        return an;
    }
}

int myfun_rec(int n)
{
    if(n < 1)
    {
        printf("Input n non valido\n");
        return 0;
    }
    else if(n >= 1)
    {
        if(n == 1)
        {
            return -1;
        }
        else if(n == 2)
        {
            return 0;
        }
        else if(n > 2)
        {
            if(n % 2 == 0)
            {
                return (myfun_rec(n - 2) / 2) - myfun_rec(n - 1) + 1;
            }
            else
            {
                return (2 * n) + myfun_rec(n - 1) + 1 + (2 * myfun_rec(n - 2));
            }
        }
    }
}
// ==============================
//          A2 (6 punti)
// ==============================
int myfun_rec(int v[], int c[], int n);

int myfun_rec(int v[], int c[], int n)
{
    if(n == 1)
    {
        if(v[0] >= 18)
        {
            return v[n - 1] * c[n - 1];
        }
        else
        {
            return 0;
        }
    }
    else if(n >= 2)
    {
        if(v[n - 1] >= 18)
        {
            return (v[n - 1] * c[n - 1]) + myfun_rec(v, c, (n - 1));
        }
        else
        {
            return 0 + myfun_rec(v, c, (n - 1));
        }
    }
}
// ==============================
//          A3 (6 punti)
// ==============================
#include <stdio.h>

int minimo(int * a, int i, int dim);
int sommatoria(int * a, int i, int dim);
int produttoria(int * a, int i, int dim);
void mysplit(int * a, int dim);

int main(void)
{
    int a[4] = {2, 1, 1, 1};

    mysplit(a, 4);

    for(int i = 0; i < 4; i = i + 1)
    {
        printf("%d\n", a[i]);
    }
}

int minimo(int * a, int i, int dim)
{
    int sommatoria = 0;

    for(int j = i; j < dim; j = j + 1)
    {
        sommatoria = sommatoria + a[j];
    }
    
    if(sommatoria <= (dim - 2))
    {
        printf("Minimo: %d\n", sommatoria);
        return sommatoria;
    }
    else if((dim - 2) <= sommatoria)
    {
        printf("Minimo: %d\n", (dim - 2));
        return (dim - 2);
    }
}

int sommatoria(int * a, int i, int dim)
{
    int min = minimo(a, i, dim);
    int somma = 0;

    for(int j = 0; j<= min; j = j + 1)
    {
        somma = somma + (*(a + j) * *(a + j + 1));
    }
    printf("Somma: %d\n", somma);
    return somma;
}

int produttoria(int * a, int i, int dim)
{
    int min = minimo(a, i, dim);
    int prodotto = 1;

    for(int j = min; j < dim; j = j + 1)
    {
        prodotto = prodotto * *(a + j);
    }
    printf("Prodotto: %d\n", prodotto);
    return prodotto;
}

void mysplit(int * a, int dim)
{
    for(int i = 0; i < dim; i = i + 1)
    {
        *(a + i) = sommatoria(a, i , dim) + produttoria(a, i, dim);
    }
}

// ==============================
//       ESERCIZI OPZIONALI
//           (12 punti)
// ==============================
//          B1 (3 punti)
// ==============================
int myfun_pari(int n);
int myfun_dispari(int n);

int myfun_pari(int n)
{
    if(n % 2 == 0)
    {
        return myfun_dispari(n - 1);
    }
    else
    {
        return myfun_pari(n - 1);
    }
}

int myfun_dispari(int n)
{
    if(n % 2 != 0)
    {
        return myfun_pari(n - 1);
    }
    else
    {
        return myfun_dispari(n - 1);
    }
}
// ==============================
//          B3 (5 punti)
// ==============================
// * Foglio *
// ==============================
//          B3 (5 punti)
// ==============================
// * Python *