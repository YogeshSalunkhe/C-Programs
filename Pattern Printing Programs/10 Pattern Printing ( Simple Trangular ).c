//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

int main()
{
  int i = 0,j = 0,x = 5;
  
  printf("Pattern Of Given Range => ");
  
  for(i = 1; i <= x; i++)
  {
     for(j = 1;j <= x; j++)
     {
       if(i==j&&(i+j == (x+1))||i == x||(i == (j*j)&&(i/2 == j))||(i +j > x &&(i/j == 1)))
       
       printf(" * ");
       
       else 
       printf ("   ");
     }
     printf ("\n");
  }
  
  getch();
  return 0;
}
