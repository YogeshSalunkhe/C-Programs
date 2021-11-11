#include <stdio.h>
#include <conio.h>

int main ()
{ 
 char ch = 'A';
  
 printf("Value of character = %c.\n\n",ch);
  
 printf ("Enter New Character Value :  ");
  
 ch = getchar();
 
 printf ("\n\n New Value of character = %c.\n ",ch);
   
 printf("\n\n Thanks .\n press key to exit");
  
  getch();
  return 0;
}