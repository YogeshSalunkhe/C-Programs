//Compiler version gcc  6.3.0
#include <stdio.h>



int main()
{
  int No1 = 0,No2 = 0,Lcm = 0,i = 1,GCD = 0;
  
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
  
  for(Lcm = 1;i <= No1 * No2;Lcm++)
  {
       if(Lcm % No1 == 0 && Lcm % No2 == 0)
       {
             break;
       }  
  }
  
  printf("\n\t %d",Lcm);
  
  printf("\n\t %d",GCD);
  
  getch();
  return 0;
}