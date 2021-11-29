#include <stdio.h>

int main(void)
{
   int conta, num;
   scanf("%d", &conta);
   scanf("%d", &num);

   while(conta>0)
   {
     num=num*10;
     conta=conta-1;
   }

   printf("%d\n", num);

  return 0;
}

// 1. Se num=4 e conta=5, allora num=400000.
// 2. Se num=4 e conta=0, allora num=4.
// 3. Se num=4 e conta=1, allora num=40.