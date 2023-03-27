//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

int main()
{
  int Sno = 0,Eno = 0,Cnt = 0,i=0 ;
  
  printf("\n\t Enter Starting point no => ");
  scanf("%d",&Sno);
  
  printf("\n\t Ending point no => ");
  scanf("%d",&Eno);
  
  while(Sno <= Eno)
  {
     for(i = 2; i < Sno;i++)
     {
         if(Sno % i == 0)
         {
             break;
         }
         else
         {
            continue;
         }
        
     }
     if(Sno == i)
     {
         printf("\n\t %d",Sno);
     }
     
     Sno++;
  }
  
  getch();
  return 0;
}
