//Compiler version gcc  6.3.0
#include <stdio.h>

int main()
{
  char Src[50]="";
  int I = 0,space_cnt = 0;
  
  printf("\n\t Enter Name => ");
  gets(Src);
  
  for(I = 0;Src[I] != '\0';I++)
  {
    if(Src[I] == ' ')
    {
      space_cnt++;
    }
  }
  
  printf("\n\t Space count in given string = %d",space_cnt);
  
  return 0;
}