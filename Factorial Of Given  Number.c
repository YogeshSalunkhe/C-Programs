#include <stdio.h>
#include <conio.h>

int main()
{
  long int No = 0, Fact = 1,Temp = 0;
  
  printf("\n \t Enter A Number To Get Factorial =");
  scanf("%d",&No);
  
  Temp = No ; 
  
  while(Temp > 1)
  {
    Fact = Fact * Temp ;
    Temp--;
  }
  
  printf ("\n Factorial of %d is = %d",No,Fact);
  return 0;
}