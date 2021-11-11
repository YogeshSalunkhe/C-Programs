#include <stdio.h>
#include <conio.h>

int main()
{ int No = 0 ,Zero_cnt = 0 ,Temp = 0;
  
  printf("\n\t Enter a Integer number => ");
  scanf("%d",&No);
  
  Temp = No;
  
  while(Temp > 0)
  {
    if( (Temp % 10) == 0)
    {
      Zero_cnt++;
    }
    Temp = Temp / 10;
  }
  
  printf("\n Zero Digits in %d are = %d",No,Zero_cnt);
  
  return 0;
}
