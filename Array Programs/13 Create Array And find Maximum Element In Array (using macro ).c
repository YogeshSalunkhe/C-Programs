//Compiler version gcc  6.3.0
#include <stdio.h>
#define Size 5

int main()
{
  int No[Size],I,Max;
  
  for(I = 0;I < Size;I++)
  {
    printf("\n\t Enter Element %d => ",I+1);
    scanf("%d",&No[I]);
  }
  
  for(I = 0;I < Size;I++)
  {
    if(No[I] > Max)
    {
      Max = No[I];
    }
  }
  printf("\n\t Maximum Element Of Array => %d",Max);
  
  return 0;
}
