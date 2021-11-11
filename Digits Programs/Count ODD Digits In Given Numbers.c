#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0 ,Dig = 0 ,Odd_cnt = 0 ,Temp = 0;
  
  
  printf("\n\n Enter A Positive Number => ");
  scanf("%d",&No);
  
  Temp = No ;
  
  while(Temp > 0)
  {
    Dig = Temp % 10 ;
    
    if ((Dig != 0) && (Dig % 2 != 0))
    {
      Odd_cnt++;
    }
    Temp = Temp / 10;
  }
  
  printf("\n Odd Digits in %d = %d",No,Odd_cnt);
  
  getch();
  return 0;
}
