 //Accept & Display Student Details

#include <stdio.h>
#include <conio.h>

int main()
{
 int Roll_No = 0;
 char Name [80]="";
 float Per = 0.0;
 char Course [40]="";
  
printf("\n Accepting Student Details => \n ");
  
printf ("\n Enter Student Roll Number = ");
scanf("%d",&Roll_No);
  
printf ("\n Enter Student Name = ");
scanf(" %[^\n]",Name);

printf ("\n Enter Student Percentage = ");
scanf("%f",&Per);

printf ("\n Enter Student Course Name = ");
scanf(" %[^\n]",Course);
  
getch();
  
printf ("\n\n=============***=============\n");

printf ("\n Displaying given Student Details=> \n");     

printf ("\n Roll No      = %d |", Roll_No);
printf ("\n Student Name = %s |",Name);
printf ("\n percentage.  = %0.2f |",Per);
printf ("\n course Name  = %s |",Course);

  getch();
  return 0;
}
