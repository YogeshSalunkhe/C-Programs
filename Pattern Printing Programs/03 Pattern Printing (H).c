//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

int main()
{
  int i = 0,j = 0,x = 0;
  
  printf("\n\t Enter Row And Colum Size => \n");
  scanf ("%d",&x);
  
  for(i = 1;i <= x;i++)
  {
    for(j = 1;j <= x;j++)
    {
       if(j == 1|| j == x||i ==((x+1)/2))
        printf (" * ");
      
       else
        printf("   ");
    }
    printf("\n");
  }

  getch();
  return 0;
}
