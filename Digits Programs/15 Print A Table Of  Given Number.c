#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0, Cnt = 1;
  
  printf("\n \t Enter A Number For Print A Table => ");
  scanf("%d",&No);
  printf ("\n Table Of %d Number is ",No);
  
  while(Cnt <= 10)
  {
    printf ("\n %3d * %3d = %3d",No,Cnt,(No *Cnt));
    
    Cnt++;
  }
  
  return 0;
}
