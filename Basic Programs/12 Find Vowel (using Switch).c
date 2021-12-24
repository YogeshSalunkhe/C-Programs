//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

int main()
{
  char ch = '\0';
  
  printf("Enter A Character => ");
  scanf("%c",&ch);
  
  switch (ch)
  {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
           
           printf("\n \t Given Character Is Vowel");
           break;
    
    case'B':
    case'b':
    case'C':
    case'c':
    case'D':
    case'd':
    case'F':
    case'f':
    case'G':
    case'g':
    case'H':
    case'h':
    case'J':
    case'j':
    case'K':
    case'k':
    case'L':
    case'l':
    case'M':
    case'm':
    case'N':
    case'n':
    case'P':
    case'p':
    case'Q':
    case'q':
    case'R':
    case'r':
    case'S':
    case's':
    case'T':
    case't':
    case'V':
    case'v':
    case'W':
    case'w':
    case'X':
    case'x':
    case'Y':
    case'y':
    case'Z':
    case'z':
        printf("\n\t Given Character Is Not Vowel Its Only Alphabate !! ");
        break;
        
   case'0':
   case'1':
   case'2':
   case'3':
   case'4':
   case'5':
   case'6':
   case'7':
   case'8':
   case'9':
        printf("\n\t Given  Character Is Digit");
        break;
        
   default:
     printf("\n\t Given Character Is Special Symbol ");
     break;
 }
  printf("\n\t Thanks For Using !!!");
  
  return 0;
}
