#include <stdio.h>
#include <conio.h>

int main()
{
  long int No1 = 1,No2 = 0,No3 = 0,cnt = 0;
 
  printf("\n\t Enter Cnt For Fibonacci series => ");
  scanf("%d",&cnt);
  
  while(cnt > 0)
  {
    printf("\n  %d", No3);
   
   No3 = No1+No2; 
   No1 = No2 ;
   No2 = No3 ;
   
   cnt --;
  }
  getch (); 
  return 0;
}
