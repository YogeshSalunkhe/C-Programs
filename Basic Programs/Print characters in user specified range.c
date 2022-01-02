//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

int main()
{
  char ch ='\0',Sp,Ep;
 
  printf("\n\t Enter A Starting point Chacter => ");
  scanf("%c",&Sp);
  
  printf("\n\t Enter A Ending point Chacter => ");
  scanf(" %c",&Ep);
  
  if(Sp <= Ep)
  {
     for(ch = Sp ; ch <= Ep ; ch++)
     {
       printf("\n\t %c ",ch);
     }
  }
  else
  {
     for(ch = Sp; ch >= Ep ; ch--)
     {
       printf("\n\t %c",ch);
     }
  }
  
  return 0;
}