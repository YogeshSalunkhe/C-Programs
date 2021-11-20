//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

int main()
{
  int i = 0,j = 0,x = 0;
  printf("Enter Size => ");
  scanf ("%d",&x);
  
  for(i = 1;i <= x;i++)
  {
    for(j = 1; j <= x;j++)
    {
      if(i == 1||i == x||j == (x+1)/2)
      printf(" * ");
      
      else
      printf("   ");
    }
    printf ("\n");
  }
  
  
  return 0;
}