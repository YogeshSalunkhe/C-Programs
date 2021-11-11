#include <stdio.h>
#include <conio.h>

int main()
{
  int Month_No = 0;
 
  up:
   printf("\n\t Enter A Month_No(1-12) => ");
   scanf("%d",&Month_No);
  
   switch (Month_No)
  {
    case 1:
      printf("\n\t January !!!");
      break ;
      
    case 2:
      printf("\n\t February !!!");
      break ;
      
    case 3: 
      printf("\n\t March !!!");
      break ;
      
    case 4:
      printf("\n\t April !!!");
      break ;
      
    case 5:
      printf("\n\t May !!!");
      break ;
      
    case 6:
      printf("\n\t Jun !!!");
      break ;
      
    case 7:
      printf("\n\t July !!! ");
      break ;
      
    case 8:
      printf("\n\t Augest !!!");
      break ;
      
    case 9:
      printf("\n\t Saptember !!! ");
      break ;
      
    case 10:
      printf("\n\t Octmber !!!");
      break ;
      
    case 11:
      printf("\n\t November !!!");
      break ;
      
    case 12:
      printf("\n\t Disember !!!");
      break ;
      
    default :
      printf("\n\t Invalid Month Number !!! \n ");
      goto up ;
      break ;
  }
  
  getch ();
  return 0;
}
