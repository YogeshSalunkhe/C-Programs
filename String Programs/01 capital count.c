//Compiler version gcc  6.3.0
#include <stdio.h>

int main()
{
  char Src[50]="";
  int I = 0,U_cnt = 0;
  
  printf("\n\t Enter Name => ");
  gets(Src);
  
  for(I = 0;Src[I] != '\0';I++)
  {
    if(Src[I] >= 65 && Src[I] <= 90)
    {
      U_cnt++;
    }
  }
  
  printf("\n\t UPPER Case letters count in given string = %d",U_cnt);
  
  return 0;
}