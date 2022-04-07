//Compiler version gcc  6.3.0
#include <stdio.h>

int main()
{
  char Src[50]="";
  int I = 0,D_cnt = 0;
  
  printf("\n\t Enter Name => ");
  gets(Src);
  
  for(I = 0;Src[I] != '\0';I++)
  {
    if(Src[I] >= 48 && Src[I] <= 57)
    {
      D_cnt++;
    }
  }
  
  printf("\n\t Digit count in given string = %d",D_cnt);
  
  return 0;
}
