#include <stdio.h>
#include <conio.h> 

int main()
{
  int Cnt = 1,No = 0, Sum = 0;
 
  printf ("\t Enter 5 Intiger Numbers For Addition.\n");
 
  while(Cnt <= 5)
  {
    printf("\n\t Enter A Number =>");
    scanf("%d",&No);
    
    Sum = Sum + No ;
    
    Cnt ++;
  }
  
  printf ("\n\t Addition Of Given Numbers %d = ",Sum);
  
  return 0;
}