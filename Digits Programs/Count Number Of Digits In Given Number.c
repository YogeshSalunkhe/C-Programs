#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0,Dcnt = 0,Temp = 0;
  
  printf("\n Enter A Positive Number =>");
  scanf("%d",&No);
  
  Temp = No;
  
  while(Temp > 0)
  {
    Temp = Temp / 10;
    Dcnt++;
  }
 
 printf("\n Digits In Given Number %d is = %d.",No,Dcnt);
 
 return 0;
}