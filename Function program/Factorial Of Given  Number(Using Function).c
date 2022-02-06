#include <stdio.h>

void Display_Fact(int No)
{
  int Fact = 1,Temp = 0;
  Temp = No ; 
  
  while(Temp > 1)
  {
    Fact = Fact * Temp ;
    Temp--;
  }
  
  printf ("\n\t Factorial of %d is = %d",No,Fact);
}

int main()
{
  long int No = 0;
  
  printf("\n\t Enter A Number To Get Factorial =");
  scanf("%d",&No);
  
  Display_Fact(No);
  
  return 0;
}
