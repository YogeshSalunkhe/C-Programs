//Compiler version gcc  6.3.0
#include <stdio.h>

int main()
{
  char Src[50]="";
  int I = 0;
  
  printf("\n\t Enter Name => ");
  gets(Src);
  
  for(I = 0;Src[I] != '\0';I++)
  {
    if(Src[I] >= 97 && Src[I] <= 122)
    {
      Src[I] = Src[I] - 32;
    }
  }
  
  printf("\n\t Converted  string = %s",Src);
  
  return 0;
}
