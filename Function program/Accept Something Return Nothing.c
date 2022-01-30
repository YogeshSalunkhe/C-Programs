//Compiler version gcc  6.3.0
#include <stdio.h>

void Display_Pattern(int Ino)
{
  int i,j;
  
  for(i = 1; i <= Ino; i++)
  {
    printf("\t");
    
     for(j = 1; j <= Ino; j++)
     {
       printf(" * ");
     }
     
     printf("\n");
  }
  
}

int main()
{
  int Size;
  
  printf("\n\t Enter Size For Printing => ");
  scanf("%d",&Size);
  
  printf("\n\t Pattern is => \n\n");
  
  Display_Pattern(Size);
  
  return 0;
}