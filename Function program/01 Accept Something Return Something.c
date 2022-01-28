//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

int Factorial (int);

int main()
{
  int No = 0,Fact = 0;
  
   printf("\n\t Enter A Number To Gets Its Factorial =>");
   scanf("%d",&No);
   
   Fact = Factorial (No);
   
   printf("\n\t Factorial Of Given Number %d Is %d ",No,Fact);
  
   getch();
   return 0;
}
int Factorial(int Num)
{
  int Res = 0;
  
  for(Res = 1;Num > 1;Num--)
  {
    Res = Res * Num;
  }
  return Res;
}
