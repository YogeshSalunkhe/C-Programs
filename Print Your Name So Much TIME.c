#include <stdio.h>
#include <conio.h>

int main()
{
  int cnt = 0;
  printf("\n\tEnter A Number For looping printf statement =>");
  scanf("%d",&cnt);
  
  while(cnt >= 1)
  {
    printf("\n Fork \n Infosystem \n");
    
    cnt--;
  }
  
  return 0;
}