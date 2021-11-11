#include <stdio.h>
#include <conio.h>

int main()
{
 int No = 0;
  up:
  printf("\n\tEnter A Number To Cheak Its +ve Or -ve => ");
  scanf("%d",&No);
  
  if (No == 0)
  {
    printf ("\n\t Given Number Is Neutural !!!\n\t");
    goto up;
  }
  else if(No > 0)
  {
    printf ("\n\t Given Number Is Positive !!");
  }
  else 
  {
    printf ("\n\t Given Number Is Negative !!");
  }
  
getch ();  
return 0;
}