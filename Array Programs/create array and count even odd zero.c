//Compiler version gcc  6.3.0
#include <stdio.h>



int main()
{
  int Num[5]={0},I = 0,E_cnt = 0,O_cnt = 0,Z_cnt = 0;
 
 for(I = 0;I < 5;I++)
 {
     printf("\n\t Enter Element %d => ",I+1);
     scanf("%d",&Num[I]);
 } 
 for(I = 0;I < 5;I++)
 {
   if(Num[I] != 0 && Num[I] % 2 == 0)
   {
     E_cnt++;
   }
   else if(Num[I] % 2 != 0)
   {
     O_cnt++;
   }
   else if(Num[I] == 0)
   {
     Z_cnt++;
   }
 }
 
 printf("\n\t Even Elements In Given Array => %d",E_cnt);
 printf("\n\t Odd Elements In Given Array => %d",O_cnt);
 printf("\n\t Zero Element In Given Array => %d",Z_cnt);
  
  return 0;
}