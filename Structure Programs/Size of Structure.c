//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

int main()
{
  struct stud
  {
    int Rollno;
    char city[10];
    char name [30];
    int Marks ;
  };
  
  int Num;
  struct stud Std1;
  
  printf("\n\n==============================================");

  printf("\n\t Size Of integer = %d.",sizeof(int));
  printf("\n\t Size Of integer = %d.",sizeof(Std1));
  printf("\n\t Size Of integer = %d.",sizeof(Std1.city));
  printf("\n\t Size Of integer = %d.",sizeof(Std1.Marks));
   
 printf("\n\n==============================================");
 
  return 0;
}