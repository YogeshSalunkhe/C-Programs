//Compiler version gcc  6.3.0
#include <stdio.h>



int main()
{
  int Arr[5],Sum = 0,Avrg = 0,i = 0;
  
  for(i = 0;i < 5;i++)
  {
      printf("\n\t Enter %d element => ",i+1);
      scanf("%d",&Arr[i]);
      
      Sum += Arr[i];
  }
  
  Avrg = Sum / i;
  
  if(Avrg >= 80)
  {
      printf("\n\t A");
  }
  else if(Avrg >= 60 && Avrg <= 79)
  {
     printf("\n\t B");
  }
  else if(Avrg >= 40 && Avrg <= 59)
  {
     printf("\n\t C");
  }
  else
  {
     printf("\n\t D");
  }
  
  return 0;
}