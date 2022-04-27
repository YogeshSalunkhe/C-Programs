//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

int MaxN(int,int);

int main()
{
  int N1,N2,Max;
  
  printf("\n\t Enter 2 Numbers to find Max => ");
  scanf("%d%d",&N1,&N2);
  
  Max=MaxN(N1,N2);
  
  if(Max == 0)
  {
      printf("\n\t Both Numbers Are Equal !!!");
  }
  else
  {
      printf("\n\t Maximum Number Is = %d",Max);
  }
  
  return 0;
}
int MaxN(int No1,int No2)
{
  if(No1 == No2)
  {
    return 0;
  }
  if(No1 > No2)
  {
    return No1;
  }
  else
  {
    return No2;
  }
  
}