//Compiler version gcc  6.3.0
#include <stdio.h>

int main()
{
  char Src[50] = "";
  int I = 0,j = 0;
  
  printf("\n\t Enter Name => ");
  gets(Src);
  
  for(I = 0;Src[I] != '\0';I++);

  
  for(j = 0; Src[I] != '\0' ;I--,j++)
  {
     Src[j] = Src[I];
    
  }
  
  printf("\n\t Aft4 Of  string = %s",Src);
  
  return 0;
}
