#include <stdio.h>
#include <conio.h>

int main()
{
  char Sp = '\0', Ep ='\0';
  
 printf("\n\t Enter Range To Print Character \n");
  
  printf("\n\t Start Point =>");
  scanf(" %[^\n]",&Sp);
  
  printf("\n\t End Point =>");
  scanf(" %[^\n]",&Ep);
  
  if (Sp > Ep)
  {
      while(Sp >= Ep)
      {  
       printf("\n %c",Sp);
       Sp--;
      }
  
  }
  else 
  {
        while(Sp <= Ep)
        {
          printf("\n %c",Sp);
          Sp++;
        }
  }
  
  return 0;
}