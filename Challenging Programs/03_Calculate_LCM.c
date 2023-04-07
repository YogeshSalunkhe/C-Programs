//Compiler version gcc  6.3.0
#include <stdio.h>

int main()
{
  int N1 = 0,N2 = 0,Lcm = 0;
  
  printf("\n\t Enter N1 And N2 => ");
  scanf("%d%d",&N1,&N2);
  
  for(Lcm = 1;Lcm <= N1 * N2;Lcm++)
  {
      if(Lcm % N1 == 0 && Lcm % N2 == 0)
      {
          break;
      }
  }
  
  printf("\n\t Lcm for %d And %d = %d.",N1,N2,Lcm);
  
  return 0;
}
