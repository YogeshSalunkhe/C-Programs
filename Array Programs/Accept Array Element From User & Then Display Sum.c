//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

#define size 5

int main()
{
  int i = 0,Billsum = 0,Bill[size] = {0};
  
  for(i = 0 ; i < size ; i++)
  {
    SameBill:
     
    printf("\n Enter Bill No = %d = ",(i+1));
    scanf("%d",&Bill[i]);
    
    if(Bill[i] <= 0)
    {
      printf("\n Invalid Amount !!!");
      goto SameBill;
    }
    
    Billsum = Billsum + Bill[i];
  }
  
  printf("\n\t Bills Generated Today => \n");
  
  for(i = 0 ; i < size ; i++)
  {
    printf("\n Amount In Bill.No %d = %d \n",(i+1001),Bill[i]);
    
  }
  printf("\n Total Amount Received Today = %d ",Billsum);
   
   getch();
   return 0;
}