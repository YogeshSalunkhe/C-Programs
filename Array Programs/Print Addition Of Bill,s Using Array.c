//Compiler version gcc  6.3.0

#include <stdio.h>
#include <conio.h>
#define size 5 

int main()
{
  int Bill[size] = {}, Bill_Sum = 0,I = 0;
  
  printf("Addition Of Given Bills\n");
 
 for(I = 0;I < size;I++)
 {
     sameBill:
     printf("\n Bill No %d ",I+1);
     scanf("%d",&Bill[I] );
     
     if(Bill[I] <= 0)
     {
       printf("\n\t Given Amount Is Invalid ");
       goto sameBill;    
     }
     
     
     Bill_Sum += Bill[I];
 }
     printf ("\n Values Of Bills %d",Bill_Sum);
     
     getch();
     return 0;
}