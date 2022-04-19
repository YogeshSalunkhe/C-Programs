//Compiler version gcc  6.3.0
#include <stdio.h>

int Add(int,int);
int Sub(int,int);
int Mult(int,int);
int Div(int,int);
int Mod(int,int);

int main()
{
  int N1,N2;
  
  printf("\n\t Enter 2 Numbers => ");
  scanf("%d%d",&N1,&N2);
  
  printf("\n\t %d + %d = %d",N1,N2,Add(N1,N2));
  printf("\n\t %d - %d = %d",N1,N2,Sub(N1,N2));
  printf("\n\t %d * %d = %d",N1,N2,Mult(N1,N2));
  printf("\n\t %d / %d = %d",N1,N2,Div(N1,N2));
  printf("\n\t(%d)%(%d)= %d",N1,N2,Mod(N1,N2));
  
  return 0;
}
int Add(int N1,int N2)
{
  return N1 + N2;
}
int Sub(int N1,int N2)
{
  return N1-N2;
}
int Mult(int N1,int N2)
{
  return N1 * N2;
}
int Div(int N1,int N2)
{
  return N1 / N2;
}
int Mod(int N1,int N2)
{
  return N1 % N2;
}