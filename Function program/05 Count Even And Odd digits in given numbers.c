//Compiler version gcc  6.3.0
#include <stdio.h>

void Display_Evencnt(int Ino)
{
  int Dig,Ecnt = 0;
     
   while(Ino > 0)
  {
     Dig = Ino % 10;
     
     if(Dig % 2 == 0)
     {
       Ecnt++;
     }
     
    Ino = Ino / 10;
  }
   
    printf("\n\t Even count In Given Number Is = %d",Ecnt);
    
}

void Display_Oddcnt(int Ino)
{
  int Dig,Ocnt = 0;
    
  while(Ino > 0)
  {
     Dig = Ino % 10;
     
     if(Dig % 2 != 0)
     {
       Ocnt++;
     }
     
    Ino = Ino / 10;
  }
   
    printf("\n\n\t Odd count In Given Number Is = %d",Ocnt);
    
}

int main()
{
  int No;
  
  printf("\n\t Enter A Number => ");
  scanf("%d",&No);
  
  Display_Evencnt(No);
 
  Display_Oddcnt(No);
  
  return 0;
}
