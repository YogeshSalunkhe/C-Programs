#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0;
 
  printf("\n Enter A Integer Numbers =>");
  scanf("%d",&No);
  
  if( No % 5 == 0 && No % 7 == 0)
  {
    printf ("\n Given Number is Divisible by both");
  }
  else if(No % 5 == 0)
  {
    printf ("\n Given Number is Divisible by Only 5");
  }
  else if(No% 7 == 0)
  {
    printf("\n Given Number is Divisible by Only 7");
  }
  else
  {
    printf("\n Given Number is Not Divisible by both 5 & 7");
  }
 
 getch ();
 return 0;
}