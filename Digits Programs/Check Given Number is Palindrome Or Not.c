#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0,Rev = 0,Temp = 0;
  
  printf("\n\t Enter A Number To Reverse It = ");
  scanf("%d",&No);
  
  for(Temp = No; Temp > 0;Temp = Temp / 10)
  {
    Rev = (Rev * 10) + (Temp % 10);
  }
  
  if (No == Rev)
  {
    printf("\n Given Number %d Is = %d",No,Rev);
    printf("\n Given Number Is Palindrome !!!");
  }
  else 
  {
    printf("\n Given Number %d Is != %d",No,Rev);
    printf("\n Given Number Is Not Palindrome !!!");
  }
  
  return 0;
}