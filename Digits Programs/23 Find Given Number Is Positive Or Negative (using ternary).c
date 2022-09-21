//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>


int main()
{
  int No = 0;
  
  printf("\n\t Enter No => ");
  scanf("%d",&No);
  
  ((No == 0)? printf("\n\t Zero is Neutral !"):(No > 0)? printf("\n\t Number is +"): printf("\n\t Number is -"));
  
  getch();
  return 0;
}
