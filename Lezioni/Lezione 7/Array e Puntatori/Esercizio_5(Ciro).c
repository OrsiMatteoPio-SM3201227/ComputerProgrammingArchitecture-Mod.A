#include <stdio.h>

void composti(int k)
{
  int div=0;
  int div_prec=0;
  int i=1;

  while(k!=0)
  {
    for(int j=1; j<=i; j=j+1)
    {
      if(i%j==0)
      {
        div=div+1;
      }
      if(div>div_prec)
      {
        printf("%d\n", i);
        div_prec=div;
        k=k-1;
      }
      
    }
    div=0;
    i=i+1;
  }
}

int main(void)
{ 
  composti(10);
}