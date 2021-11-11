//Swapping Given Numbers
#include <stdio.h>
#include <conio.h>

int main()
{
  int No1 = 0, No2 = 0;
 
  printf("\n Enter 2 Integer Numbers =>");
  scanf("%d%d",&No1,&No2);
  
  No1 = No1 + No2;
  No2  = No1 - No2;
  No1 = No1 - No2;
  
  printf ("\n After Swapping => No= %d,No = %d",No1,No2);
  
  
 
 
 return 0;
}
