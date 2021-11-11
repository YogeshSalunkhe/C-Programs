#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0 , Dig = 0 ,Even_cnt = 0 ,Temp = 0;
  printf("\n\n Enter a Number => ");
  scanf("%d",&No);
  
  Temp = No ;
 
  while(Temp > 0)
  {
   Dig = Temp % 10;
    
    if((Dig != 0) && (Dig % 2 == 0))
    {
      Even_cnt++;
    }
    Temp = Temp / 10;
  }
  
  printf("\n\n Even Digit in %d is = %d",No,Even_cnt);
  
  getch();
  return 0;
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  return 0;
}