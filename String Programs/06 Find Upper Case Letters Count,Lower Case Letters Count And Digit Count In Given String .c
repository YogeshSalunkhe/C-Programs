//Compiler version gcc  6.3.0
#include <stdio.h>

int main()
{
  char Src[50]="";
  int I = 0,D_cnt = 0,U_cnt=0,L_cnt=0;
  
  printf("\n\t Enter Name => ");
  gets(Src);
  
  for(I = 0;Src[I] != '\0';I++)
  {
    if(Src[I] >= 48 && Src[I] <= 57)
    {
      D_cnt++;
    }
    else if (Src[I] >= 65 && Src[I] <= 90)
    {
      U_cnt++;
    }
    else if(Src[I] >= 97 && Src[I] <= 122)
    {
      L_cnt++;
    }
    
  }
  
  printf("\n\t Capital Letters count in given string = %d",U_cnt);
  printf("\n\t Small Letters count in given string = %d",L_cnt);
  printf("\n\t Digit count in given string = %d",D_cnt);
  
  return 0;
}
