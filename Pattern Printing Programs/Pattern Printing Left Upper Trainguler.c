//Compiler version gcc  6.3.
#include <stdio.h>
#include <conio.h>

int main()
{
  int i = 0,j = 0,x = 0;
  char ch = 'A';
  
  printf("Enter Size For Printing => ");
  scanf("%d",&x);
  
  for(i = 1;i <= x ; i++ )
  { 
   
    for(j = 1;j <= x;j++)
    {
       if(i == 1||j == 1||(i+j <= (x+1)))
       {  printf(" %c ",ch);
          ch=ch+1;
       }
       if(ch>'Z')
        {
          ch=('A'+(ch-'Z'))-1;
        }
    }
    printf("\n\n");
  }
 
 
 getch();
 return 0;
}

