//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

int main()
{
  int i = 0,j = 0,x = 0;
 
  printf("Enter Size For Printing => ");
  scanf("%d",&x);
  
  for(i = 1;i <= x;i++)
  {
    for(j = 1;j <= x;j++)
    {
      if(j <= i)
      printf(" @ ");
      
      else 
      printf("   ");
    }
    printf ("\n");
  }
  
  
  return 0;
}
