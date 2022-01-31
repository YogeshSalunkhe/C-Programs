//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 25;
  int *iptr = (&No);
  
  printf("\n\t Value Of No Is = %d",No);
  printf("\n\t Value Of *iptr Is = %d",*iptr);
  
  getch();
  return 0;
}
