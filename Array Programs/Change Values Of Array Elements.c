//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

int main()
{
  int Values[5]={10,11,12,13,14};
  
  printf("\n\t Values Of 1st Element = %d ",Values[0]);
  printf("\n\t Values Of 2nd Element = %d ",Values[1]);
  printf("\n\t Values Of 3rd Element = %d ",Values[2]);
  printf("\n\t Values Of 4th Element = %d ",Values[3]);
  printf("\n\t Values Of 5th Element = %d ",Values[4]);
  
  Values[0] = 45;
  Values[1] = 50;
  Values[2] = 55;
  Values[3] = 60;
  Values[4] = 65;
  
  printf("\n\n\t============:::::===========:::::::========\n");
 
  printf("\n\t Values Of 1st Element = %d ",Values[0]);
  printf("\n\t Values Of 2nd Element = %d ",Values[1]);
  printf("\n\t Values Of 3rd Element = %d ",Values[2]);
  printf("\n\t Values Of 4th Element = %d ",Values[3]);
  printf("\n\t Values Of 5th Element = %d ",Values[4]);
  
printf("\n\n\t============:::::===========:::::::========\n");
  return 0;
}