//Compiler version gcc  6.3.0
#include <stdio.h>

int main()
{
  int No,i;
  
  printf("\n\t Enter A Number => ");
  scanf("%d",&No);
  
  for( i = 1; i < No;i++)
  {
    if(No % i == 0)
    {
      break;
    }
       
  }
  
  if(No == i)
  {
    printf("\n\t Given Number %d Is Prime ",No);
  }
  else
  {
    printf("\n\t Given Number %d Is Not Prime",No);
  }
  return 0;
}