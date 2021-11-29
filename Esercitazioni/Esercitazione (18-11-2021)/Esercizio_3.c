#include <stdio.h>

// --- FUNZIONI ---
int lunghezza(char *s, int i);

// --- PROGRAMMA PRINCIPALE ---
int main(int arg, char **argv)
{
   char s[5]={'a', 'n', 'n', 'o'};

   printf("La lunghezza della stringa è: %d\n", lunghezza(s, 0));
}

// --- CORPO DELLE FUNZIONI ---
int lunghezza(char *s, int i)
{
    if(s[i]=='\0')
    {
        return i;
    }
    else
    {
        return lunghezza(s, i+1);
    }
}