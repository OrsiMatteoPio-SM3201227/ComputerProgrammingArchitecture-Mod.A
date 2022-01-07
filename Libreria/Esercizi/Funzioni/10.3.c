// Si scriva una funzione che, ricevuti in ingresso le coordinate p1 = (x1, y1) e p2 = (x2, y2) di due punti del piano cartesiano, restituisca la loro distanza euclidea. Nota: la funzione radice quadrata (sqrt) in C viene fornita dalla libreria <math.h>. Nota: per provare il programma usare i seguenti comandi in shell: gcc Libreria/Esercizi/Funzioni/10.3.c -lm && ./a.out.

// ==============================
//           LIBRERIA
// ==============================
#include <math.h>
#include <stdio.h>

// ==============================
//           FUNZIONI
// ==============================
//        Distanza euclidea
// ==============================
double distanza(double x1, double y1, double x2, double y2);
// ==============================
//        Potenza ricorsiva
// ==============================
float potenza_ricorsiva(int a, int b);

// ==============================
//           PROGRAMMA
// ==============================
//      Corpo del programma
// ==============================
int main(void)
{
    // Dichiarazione delle variabili
    double x1, y1, x2, y2;

    printf("Inserire il valore x1 del punto p1 = (x1, y1): ");
    scanf("%lf", &x1);
    printf("Inserire il valore y1 del punto p1 = (x1, y1): ");
    scanf("%lf", &y1);
    printf("Inserire il valore x2 del punto p2 = (x2, y2): ");
    scanf("%lf", &x2);
    printf("Inserire il valore y2 del punto p2 = (x2, y2): ");
    scanf("%lf", &y2);

    // Richiamo della funzione distanza euclidea
    printf("La distanza euclidea tra i punti p1 = (%lf, %lf) e p2 = (%lf, %lf) è: %lf\n", x1, y1, x2, y2, distanza(x1, y1, x2, y2));
}

// ==============================
//           FUNZIONI
// ==============================
//        Distanza euclidea
// ==============================
double distanza(double x1, double y1, double x2, double y2)
{
    return sqrt(potenza_ricorsiva((x1 - x2), 2) + potenza_ricorsiva((y1 - y2), 2));
}
// ==============================
//        Potenza ricorsiva
// ==============================
float potenza_ricorsiva(int a, int b)
{
    if(b < 0)
    {
        return 1/(a * potenza_ricorsiva(a, ((b * (- 1))-1)));
    }
    else if(b == 0)
    {
        return 1;
    }
    else if(b == 1)
    {
        return a;
    }
    else if(b > 0)
    {
        return a * potenza_ricorsiva(a, b - 1);
    }
}