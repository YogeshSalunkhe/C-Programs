#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0,Dsum = 0,Temp = 0;
  
  printf("\n Enter A Positive Number =>");
  scanf("%d",&No);
  
  Temp = No;
  
  while(Temp > 0)
  {
    Dsum  = Dsum + (Temp % 10);
    Temp /= 10 ;
  }
  
  printf("\n Sum Of Digits In Given Number %d = %d",No,Dsum);
  
  return 0;
}
