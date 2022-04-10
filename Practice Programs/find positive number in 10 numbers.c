//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0,I,P_cnt = 0;
  
  for(I = 1;I <= 10;I++)
  {
     printf("\n\t Enter Number %d => ",I);
     scanf("%d",&No);
     
     if(No > 0)
     {
       P_cnt++;
     }
  }
  printf("\n\t Positive Number Count Of Given Numbers => %d",P_cnt);
  return 0;
}