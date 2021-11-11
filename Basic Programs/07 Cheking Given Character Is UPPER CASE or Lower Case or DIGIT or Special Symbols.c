
//cheking given Character is Upper case,lower case,digit or special symbol.
 #include <stdio.h>
 #include <conio.h>

int main()

{
  char ch = '\0';
  
  printf("\n \n Enter A Character =");
  ch = getchar ();
  
  if( ch >= 'A' && ch <= 'Z')
  {
    printf("\n\n %c is upper case alphabet.",ch);
  }
  else if(ch >=  'a' && ch <=  'z')
  {
    printf("\n %c is lower case alphabet.",ch);
  }
  else if(ch >= 0 && ch <= 9)
  {
   printf ("\n  %c is Digit.",ch);
  }
  else
  {
    printf("\n %c is special symbol.",ch);
  }
   
 getch();
 return 0;
}
