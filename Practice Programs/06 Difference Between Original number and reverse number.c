//Compiler version gcc  6.3.0
#include <stdio.h>


int main()
{
  int No = 0,Rev = 0,Temp = 0;
  
  printf("\n\t Enter Number => ");
  scanf("%d",&No);
  
  Temp = No;
  
  while(No > 0)
  {
      Rev = (Rev * 10)+(No % 10);
      
      No /= 10;
  }
 
  
  printf("\n\t Difference = %d",Temp - Rev);
  
  return 0;
}
