//Compiler version gcc  6.3.0
#include <stdio.h>

int main()
{
  int No[5],I,Max;
  
  for(I = 0;I < 5;I++)
  {
    printf("\n\t Enter Element %d => ",I+1);
    scanf("%d",&No[I]);
  }
  
  for(I = 0;I < 5;I++)
  {
    if(No[I] > Max)
    {
      Max = No[I];
    }
  }
  printf("\n\t Maximum Element Of Array => %d",Max);
  
  return 0;
}