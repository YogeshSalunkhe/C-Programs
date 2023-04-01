//Compiler version gcc  6.3.0
#include <stdio.h>

int main()
{
  int No1 = 0,No2 = 0,i = 1,GCD = 0;
  
  printf("\n\t Enter 2 Numbers => ");
  scanf("%d%d",&No1,&No2);
  
  i = 1;
  
   while(i <= No1 && i <= No2)
  {   
    if(No1 % i == 0 && No2 % i == 0)  
    {
         GCD = i;       
    }       
      i++;
  }
  
  printf("\n\t GCD is = %d",GCD);
  
  return 0;
}