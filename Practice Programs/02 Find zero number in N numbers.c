//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0,I,Z_cnt = 0,N;
  
  printf("\n\t Enter Number Count => ");
  scanf("%d",&N);
  
  for(I = 1;I <= N;I++)
  {
     printf("\n\t Enter Number %d => ",I);
     scanf("%d",&No);
     
     if(No == 0)
     {
       Z_cnt++;
     }
  }
  printf("\n\t Zero Number Count Of Given Numbers => %d",Z_cnt);
  return 0;
}
