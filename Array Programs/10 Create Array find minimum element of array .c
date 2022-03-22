//Compiler version gcc  6.3.0
#include <stdio.h>

int main()
{
  int No[5],I,Min;
  
  for(I = 0;I < 5;I++)
  {
    printf("\n\t Enter Element %d => ",I+1);
    scanf("%d",&No[I]);
  }
  
  Min = No[0];
  
  for(I = 0;I < 5;I++)
  {
    if(No[I] < Min)
    {
      Min = No[I];
    }
  }
  printf("\n\t Minimum Element Of Array => %d",Min);
  
  return 0;
}
