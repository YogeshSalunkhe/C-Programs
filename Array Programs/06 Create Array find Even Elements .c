//Compiler version gcc  6.3.0
#include <stdio.h>

int main()
{
  int No[5],I,E_Cnt = 0;
  
  for(I = 0;I < 5;I++)
  {
    printf("\n\t Enter Element %d => ",I+1);
    scanf("%d",&No[I]);
  }
  
  for(I = 0;I < 5;I++)
  {
    if(No[I] % 2 == 0)
    {
        E_Cnt++;
    }
  }
  printf("\n\t Even Count Element Of Array => %d",E_Cnt);
  
  return 0;
}
