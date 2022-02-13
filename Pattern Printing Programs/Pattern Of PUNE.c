//Compiler version gcc  6.3.0
#include <stdio.h>

void Display_Pune(int N)
{
  int i = 0,j = 0;
  
  for( i = 1; i <= N; i++)
  {
    for(j = 1; j <= N;j++)
    {
      if(i == 1 && j != N||j == 1||i == (N+1)/2 && j != N || j== N && i<= (N+1)/2)
      {
        printf(" * ");
      }
      else
      {
        printf("   ");
      }
    }
    printf("\n");
  }
  
  printf("\n\n");

  for( i = 1; i <= N; i++)
  {
    for(j = 1; j <= N;j++)
    {
      if(j == 1 && i != N|| j == N && i != N|| i == N && j != 1 && j != N)
      {
        printf(" * ");
      }
      else
      {
        printf("   ");
      }
    }
    printf("\n");
  }
  
   printf("\n\n");

  for( i = 1; i <= N; i++)
  {
    for(j = 1; j <= N;j++)
    {
      if(j == 1 || j == N || i == j)
      {
        printf(" * ");
      }
      else
      {
        printf("   ");
      }
    }
    printf("\n");
  }
 
  printf("\n\n");

  for( i = 1; i <= N; i++)
  {
    for(j = 1; j <= N;j++)
    {
      if(j == 1 || i == 1 || i == N || i == (N+1)/2)
      {
        printf(" * ");
      }
      else
      {
        printf("   ");
      }
    }
    printf("\n");
  }
  
}
  


int main()
{
  int x = 0;
  printf("\n\t Enter Size => ");
  scanf("%d",&x);
  
  Display_Pune(x);
  
  return 0;
}
