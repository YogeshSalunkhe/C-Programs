#include <stdio.h>
#include <conio.h>

int main()
{
  int Day = 0;
  
  printf("\n\t Enter A Day Number(1-7) => ");
  scanf("%d",&Day);
  
  switch (Day)
  {
    case 1:
      printf("\n\t Monday !!!");
      break;
      
    case 2:
      printf("\n\t Tuesday !!!");
      break;
      
    case 3:
      printf("\n\t Wensaday !!!");
      break;
      
    case 4:
      printf("\n\t Thuersday !!!");
      break;
      
    case 5:
      printf("\n\t Frieday !!!");
      break;
      
    case 6:
      printf("\n\t Satuerday !!!");
      break;
      
    case 7:
      printf("\n\t Sunday !!!");
      break ;
     
    default:
      printf("\n\t Invaliad Day Number !!!");
      break;
  }
  
  printf("\n\n\t Thanks For Using. !!!");
  
  getch ();
  return 0;
}
