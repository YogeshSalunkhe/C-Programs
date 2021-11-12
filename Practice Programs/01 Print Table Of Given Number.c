#include <stdio.h>
#include <conio.h>

int main()
{
 int No = 0,Cnt = 1;
 
  printf("\n\t Enter A Number for Print It's Table => ");
  scanf("%d",&No);
  
  while(Cnt <= 10)
  {
     printf ("\n %3d * %3d = %3d",No,Cnt,(No *Cnt));
  
     Cnt ++;
  }
 
  getch ();
  return 0;
}