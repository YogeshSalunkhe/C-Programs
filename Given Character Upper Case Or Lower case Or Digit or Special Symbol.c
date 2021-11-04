//Classified Character Is Upper Case Or Lower Case Or DIGIT Or Special Symbol //

#include <stdio.h>
#include <conio.h>

int main()
{
  char ch = '\0';
 
  printf("\n \t Enter A Character =>");
  ch = getchar();
  
  if (ch > 'A' && ch < 'Z')
  {
    printf("\n Given Character Is Upper Case");
  }
  else if(ch > 'a' && ch < 'z')
  {
    printf("\n Given Character Is Lower Case");
  }
  else if(ch >= '0' && ch <= '9')
  {
    printf ("\n Given Character Is DIGIT ");
  }
  else 
  {
    printf ("\n Given Character Is special symbol");
  }
  return 0;
}
