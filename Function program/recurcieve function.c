//Compiler version gcc  6.3.0

#include <stdio.h>
#include <conio.h>

int fact1(int No)
{
 if(No == 0 || No == 1)
 {
   return 1;
 }
 
 return No * fact1(No -1);
}


int main()
{
  int Num = 0,Fact;
 
  printf("\n\t Enter No => ");
  scanf("%d",&Num);
 
 Fact=fact1(Num);
 
 printf("\n\t Factorial Of Given Number %d = %d",Num,Fact);
  
  return 0;
}