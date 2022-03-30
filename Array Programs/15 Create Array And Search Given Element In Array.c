//Compiler version gcc  6.3.0
#include <stdio.h>
#define N 5

int main()
{
  int No[N],I,Src;
  
  for(I = 0;I < N;I++)
  {
    printf("\n\t Enter Element %d => ",I+1);
    scanf("%d",&No[I]);
  }
  
  printf("\n\t Enter Element For Search => ");
  scanf("%d",&Src);
  
  for(I = 0;I < N;I++)
  {
    if(No[I] == Src)
    {
      break;
    }
  }
  if(I < N+1)
  printf("\n\t Find Given Element At %d Location In Array",I+1);
  
  else
  printf("\n\t Given Element Is Not Found !!!");
  return 0;
}
