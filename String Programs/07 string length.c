//Compiler version gcc  6.3.0
#include <stdio.h>

int main()
{
  char Src[50]="";
  int I = 0,SL_cnt = 0;
  
  printf("\n\t Enter Name => ");
  gets(Src);
  
  for(I = 0;Src[I] != '\0';I++)
  {
    
    
      SL_cnt++;
    
  }
  
  printf("\n\t Length Of given string = %d",SL_cnt);
  
  return 0;
}