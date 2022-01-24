//Compiler version gcc  6.3.0
#include <stdio.h>

int main()
{
  int i,j,x;
  int cnt=1;
  
  printf("\n\t Enter Size For Printing => ");
  scanf("%d",&x);
  
  cnt=7;
  
  for(i = 1;i <= x;i++)
  {
    for(j = 1;j <= x;j++)
    {
      if(i>=j)
      {
          printf(" %-3d ",cnt);
          cnt+=7;
      }
      else
      {
        printf("   ");
      }
    }
    printf("\n");
        
        
  }
  return 0;
}
