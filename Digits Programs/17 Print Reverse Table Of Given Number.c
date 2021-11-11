#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0,cnt = 10;
  
  printf("\n Enter A Number Is To For Print Reverse Table =>");
  scanf("%d",&No);
 
  while(cnt >= 1)
  {
    printf ("\n %d = %d * %d",(No*cnt),No,cnt);
    
    cnt --;
  }
  return 0;
}
