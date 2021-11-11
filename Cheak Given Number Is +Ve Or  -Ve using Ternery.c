#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0;
  
  printf("\n\t Enter A Number To Cheak Its +ve Or -ve => ");
  scanf("%d",&No);
  
  (No = 0)?printf("\n\t Given Number Is Neutural"):((No > 0)?printf("\n\t Given Number Is Positive"):printf("\n\t Given Number Is Negative"));
 
  getch();
  return 0;
}