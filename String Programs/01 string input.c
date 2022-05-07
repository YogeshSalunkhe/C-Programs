//Compiler version gcc  6.3.0
#include <stdio.h>

int main()
{
  int I = 0,j = 0;
  char Src[10]="";
  
  
  printf("\n\t Enter Name => ");
  gets(Src);
  
  for(I = 0;Src[I] != '\0';I++);
 
  I--;
  
  for(j = 0;Src[j] != '\0';I--,j++)
  {
    if(Src[j] != Src[I])
    {
      break;
    }
    
  }
  if(I < j)
  {
    printf("\n\t Given String Is Palindrome!!!");
  }
  else
  {
    printf("\n\t Given String Is Not Palindrome!!!");
  }
  
  return 0;
}