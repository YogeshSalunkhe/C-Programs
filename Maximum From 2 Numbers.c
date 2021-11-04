#include <stdio.h>
#include <conio.h>

int main()
{
  int No1=0,No2=0;
  
   printf("Enter 2 Numbers = ");
   scanf("%d%d",&No1,&No2);
   
   if ( No1 > No2 )
   {
     printf("\n Maximum Number =%d",No1);
   }
   else 
   {
     printf("\n\n Maximum Number =%d",No2);
   }
 
  getch();
  return 0;
}
