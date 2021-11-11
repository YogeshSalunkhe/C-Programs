#include <stdio.h>
#include <conio.h>

int main()
{
  int Cnt = 1,No = 0,Sum = 0;
 
  printf("\n\t Enter 10 Integer Numbers For Addition =>\n");
  
  while(Cnt <= 10)
  {
    printf("\n Enter A Number %d = ",Cnt);
    scanf("%d",&No);
    
    Sum = Sum + No;
    
    Cnt++;
  }
  
  printf("\n\t Addition Of 10 Inputted Numbers %d = ",Sum);
  
  getch ();
  return 0;
}