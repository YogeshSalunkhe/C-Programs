//Classified Even And Odd Numbers Using Ternary Operator
#include <stdio.h>
#include <conio.h>

int main()
{
  int  No = 0;
  
  printf("\n \t Enter A Integer Number => ");
  scanf("%d",&No);
  
  (No == 0)?printf("\n Zero Is Nutral!"):(No % 2 == 0)? printf("\n Number Is Even!"): printf ("\n Given Number Is Odd!");
  
  return 0;
}
