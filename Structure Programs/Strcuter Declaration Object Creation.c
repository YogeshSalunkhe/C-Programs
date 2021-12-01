//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
   struct Stud 
   {
     int Roll_No;
     char Name[20];
     long long int Mob_No;
     float Per;
   };
   
   struct Stud std1;
   
     std1.Roll_No = 45;
     strcpy(std1 .Name,"Umesh");
     std1.Mob_No = 3457692119;
     std1.Per    = 78.67;
 
 printf("\n\t 1st Student Roll No = %d",std1.Roll_No);
 printf("\n\t 1st Student Name    = %s",std1.Name);
 printf("\n\t 1st Student Mob.No  = %lld",std1.Mob_No);
 printf("\n\t 1st Student Marks   = %0.2f",std1.Per);
  
  getch();
  return 0;
}