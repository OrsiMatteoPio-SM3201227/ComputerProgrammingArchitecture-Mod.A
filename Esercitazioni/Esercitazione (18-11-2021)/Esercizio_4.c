#include <stdio.h>

// --- FUNZIONI ---
int lunghezza(char *s, int i);
int parola_palindroma(char *s);

// --- PROGRAMMA PRINCIPALE ---
int main(int arg, char **argv)
{
   char s[5]={'a', 'n', 'n', 'a'};

   printf("La lunghezza della stringa è: %d\n", lunghezza(s, 0));
   if(parola_palindroma(s)==1)
   {
       printf("La parola è palindroma\n");
   }
   else
   {
       printf("La parola non è palindroma\n");
   }
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

int parola_palindroma(char *s)
{
    int l=lunghezza(s, 0);
    int palindromo=1;

    for(int i=0; i<=l/2; i=i+1)
    {
        if(s[i]!=s[l-i-1])
        {
            palindromo=0;
        }
    }
    return palindromo;
}