//Compiler version gcc  6.3.0
#include <stdio.h>

int main()
{
  int No[5],I,Src;
  
  for(I = 0;I < 5;I++)
  {
    printf("\n\t Enter Element %d => ",I+1);
    scanf("%d",&No[I]);
  }
  
  printf("\n\t Enter Element For Search => ");
  scanf("%d",&Src);
  
  for(I = 0;I < 5;I++)
  {
    if(No[I] == Src)
    {
      break;
    }
  }
  if(I < 6)
  printf("\n\t Find Given Element At %d Location In Array",I+1);
  
  else
  printf("\n\t Given Element Is Not Found !!!");
  return 0;
}