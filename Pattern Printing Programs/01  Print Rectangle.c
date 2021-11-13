 //pattern printing box 

#include <stdio.h>
#include <conio.h>


int main()
{
  int i = 0,j = 0;
  
  printf("\n\n pattern printing =>\n");
  
  for(i = 0; i <= 9; i++)
  {
    for(j = 0; j <= 5; j++)
    {
     printf(" # ");
    }
   printf (" \n ");
  }
 return 0;
}