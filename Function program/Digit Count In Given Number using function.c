//Compiler version gcc  6.3.0

#include <stdio.h>

int Display_Dsum(int Num)
{
    int Dig,Sum;
    
    while(Num > 0)
    {
       Dig = Num % 10;
       
       Sum = Sum + Dig;
       
       Num = Num /10;
    }
    
    return Sum;
}
int main()
{
  int No,D_Sum;
  
  printf("\n\t Enter A Number => ");
  scanf("%d",&No);
  
  D_Sum = Display_Dsum(No);
  
  printf("\n\t Sum Of Digits In Given %d = %d",No,D_Sum);
 
  return 0;
}