#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Accept_Information();
void Display_Details();
void Search_Information();
void Update_Information();

struct Bike_Info
{
            int B_Id;
            int Bike_No;
            char Owner_Name[40];
            char Company_Name[20];
            long int CS_No;
            float P_Price;
            float S_Price;
};

struct Bike_Info *Bikes = NULL;
int i = 0;
int Cnt = 0;

int main()
{
            int Choice = 0;

            printf("\n\t Enter Count Of Bikes => ");
            scanf("%d",&Cnt);

            system("cls");

            Bikes = (struct Bike_Info *)malloc(Cnt * sizeof(struct Bike_Info));

            for(;;)
            {
                            printf("\n ===========**** HONDA BIKE SHOWROOM ****===========");
                            printf("\n\n ===============*****===============");

                            printf("\n\t Select Choice => ");
                            printf("\n\n 1. Accepting Information. \n 2. Display Information. \n 3. Search Information. \n 4. Update Information. \n 5. Exit.");
                            printf("\n\n ===============*****===============");

                            printf("\n\t Enter Choice => ");
                            scanf("%d",&Choice);

                            ///system("cls");

                            switch(Choice)
                            {
                                    case 1:
                                            Accept_Information();
                                            system("cls");
                                            break;

                                    case 2:
                                            Display_Details();
                                            system("cls");
                                            break;

                                    case 3:
                                            Search_Information();
                                            system("cls");
                                            break;

                                    case 4:
                                            Update_Information();
                                            system("cls");
                                            break;

                                    case 5:
                                            goto Dwn;

                                    default:
                                            printf("\n\t Invalid Choice!!!");
                                            getch();
                                            system("cls");
                                            break;
                            }
             }

             Dwn :

                 printf("\n\n Thanks");


             getch();

             free(Bikes);

             return 0;
}

void Accept_Information()
{
            for( i = 0; i < Cnt; i++ )
            {
                            printf("\n\t============***============\n");

                            printf("\n\t <<<<<= Enter %d Bike Details =>>>>>",i+1);

                            Bikes[i].B_Id=101+i;

                            printf("\n\t Enter Bike No => ");
                            scanf("%d",&Bikes[i].Bike_No);

                            fflush(stdin);

                            printf("\n\t Enter Owner Name => ");
                            scanf("%s",&Bikes[i].Owner_Name);

                            fflush(stdin);

                            printf("\n\t Enter Company Name => ");
                            scanf("%s",&Bikes[i].Company_Name);

                            fflush(stdin);

                            printf("\n\t Enter Bike CS Number => ");
                            scanf("%ld",&Bikes[i].CS_No);

                            printf("\n\t Enter Purchase Price => ");
                            scanf("%f",&Bikes[i].P_Price);

                            printf("\n\t Enter Sales Price => ");
                            scanf("%f",&Bikes[i].S_Price);

            }

            printf("\n\t=============***=============\n");
            printf("\n\t Your Entered %d Bikes Details \n\tEnter Any Key To Back Main ",i);

            getch();
            return;
}

void Display_Details()
{
            if(i == 0)
            {
                            printf("\n\t Your Not Entered Any Information!!!.\n\t Please Enter Information!!!.\n\t Press Any Key To Main ");
                            getch();
            }
            else
            {
                            for(i = 0;i < Cnt;i++)
                            {
                                            printf("\n\t <<<<--- Displaying %d Bike Details --->>>>\n",i+1);
                                            printf("\n\t============***============\n");
                                            printf("\n\t Bike Id             => %d",Bikes[i].B_Id);
                                            printf("\n\t Bike Number         => %d",Bikes[i].Bike_No);
                                            printf("\n\t Bike Owner Name     => %s",Bikes[i].Owner_Name);
                                            printf("\n\t Bike Company Name   => %s",Bikes[i].Company_Name);
                                            printf("\n\t Bike CS Number      => %ld",Bikes[i].CS_No);
                                            printf("\n\t Bike Purchase price => %0.2f",Bikes[i].P_Price);
                                            printf("\n\t Bike Sales Price    => %0.2f",Bikes[i].S_Price);

                                            if(Bikes[i].S_Price > Bikes[i].P_Price)
                                            {
                                                        printf("\n\t Profit On Sale Of Bike => %0.2f",Bikes[i].S_Price-Bikes[i].P_Price);
                                            }
                                            else
                                            {
                                                        printf("\n\t Loss On Sale Of Bike => %0.2f",Bikes[i].P_Price-Bikes[i].S_Price);
                                            }

                                            printf("\n\n\t============***============");
                            }


                            printf("\n\t Enter Any Key To Back Main ");
                            getch();
            }

            return;
}

void Search_Information()
{
            if(i == 0)
            {
                            printf("\n\n\t================***================");
                            printf("\n\t Your Not Entered Any Information!!!.\n\t Please Enter Information!!!.\n\t Press Any Key To Main ");
                            printf("\n\n\t================***================");

                            getch();
                            system("cls");
            }
            else
            {
                            int Bike_Id = 0;

                            printf("\n\t Enter Bike Id Number For Search Information => ");
                            scanf("%d",&Bike_Id);

                            system("cls");


                             for( i = 0; i < Cnt; i++ )
                             {
                                            if(Bikes[i].B_Id == Bike_Id)
                                            {
                                                        printf("\n\t <<<<--- Find Information For Bike Id -> %d --->>>>\n",Bike_Id);
                                                        printf("\n\t============***============\n");
                                                        printf("\n\t Bike Id             => %d",Bikes[i].B_Id);
                                                        printf("\n\t Bike Number         => %d",Bikes[i].Bike_No);
                                                        printf("\n\t Bike Owner Name     => %s",Bikes[i].Owner_Name);
                                                        printf("\n\t Bike Company Name   => %s",Bikes[i].Company_Name);
                                                        printf("\n\t Bike CS Number      => %ld",Bikes[i].CS_No);
                                                        printf("\n\t Bike Purchase price => %0.2f",Bikes[i].P_Price);
                                                        printf("\n\t Bike Sales Price    => %0.2f",Bikes[i].S_Price);

                                                if(Bikes[i].S_Price > Bikes[i].P_Price)
                                                {
                                                         printf("\n\t Profit On Sale Of Bike => %0.2f",Bikes[i].S_Price-Bikes[i].P_Price);
                                                }
                                                else
                                                {
                                                          printf("\n\t Loss On Sale Of Bike => %0.2f",Bikes[i].P_Price-Bikes[i].S_Price);
                                                }

                                                           printf("\n\n\t============***============");

                                               if( i == 0)
                                               {
                                                   i++;
                                               }

                                                break;

                                            }
                                            else
                                            {
                                                        printf("\n\n\t============***============");
                                                        printf("\n\t Not Such Information Found !!! \n\t Please Enter Correct Bike Id!!!");
                                                        printf("\n\n\t============***============");

                                                        getch();
                                                        system("cls");
                                            }

                             }


                             printf("\n\t Enter Any Key To Back Main ");
                             getch();

            }

            return;
}
void Update_Information()
{
            if( i == 0 )
            {
                            printf("\n\t Your Not Entered Any Information!!!.\n\t Please Enter Information!!!.\n\t Press Any Key To Main ");
                            getch();
            }
            else
            {
                            int Bike_Id = 0;

                            printf("\n\t Enter Bike Id Number For Search Information => ");
                            scanf("%d",&Bike_Id);

                            system("cls");


                             for(i = 0;i < Cnt;i++)
                            {
                                            if(Bikes[i].B_Id == Bike_Id)
                                            {
                                                            printf("\n\t <<<<--- Find Information For Bike Id -> %d --->>>>\n",Bike_Id);
                                                            printf("\n\t============***============\n");
                                                            printf("\n\t Bike Id             => %d",Bikes[i].B_Id);
                                                            printf("\n\t Bike Number         => %d",Bikes[i].Bike_No);
                                                            printf("\n\t Bike Owner Name     => %s",Bikes[i].Owner_Name);
                                                            printf("\n\t Bike Company Name   => %s",Bikes[i].Company_Name);
                                                            printf("\n\t Bike CS Number      => %ld",Bikes[i].CS_No);
                                                            printf("\n\t Bike Purchase price => %0.2f",Bikes[i].P_Price);
                                                            printf("\n\t Bike Sales Price    => %0.2f",Bikes[i].S_Price);

                                                if(Bikes[i].S_Price > Bikes[i].P_Price)
                                                {
                                                            printf("\n\t Profit On Sale Of Bike => %0.2f",Bikes[i].S_Price-Bikes[i].P_Price);
                                                }
                                                else
                                                {
                                                            printf("\n\t Loss On Sale Of Bike => %0.2f",Bikes[i].P_Price-Bikes[i].S_Price);
                                                }

                                                            printf("\n\n\t============***============");

                                                            printf("\n\t Update Information For Bike_Id = %d",Bike_Id);

                                                            printf("\n\t============***============\n");

                                                            printf("\n\t Enter Bike No => ");
                                                            scanf("%d",&Bikes[i].Bike_No);

                                                            fflush(stdin);

                                                            printf("\n\t Enter Owner Name => ");
                                                            scanf("%s",&Bikes[i].Owner_Name);

                                                            fflush(stdin);

                                                            printf("\n\t Enter Company Name => ");
                                                            scanf("%s",&Bikes[i].Company_Name);

                                                            fflush(stdin);

                                                            printf("\n\t Enter Bike CS Number => ");
                                                            scanf("%ld",&Bikes[i].CS_No);

                                                            printf("\n\t Enter Purchase Price => ");
                                                            scanf("%f",&Bikes[i].P_Price);

                                                            printf("\n\t Enter Sales Price => ");
                                                            scanf("%f",&Bikes[i].S_Price);


                                                            if(i == 0)
                                                            {
                                                                i++;
                                                            }


                                                            break;

                                                }
                            }

                            printf("\n\t Enter Any Key To Back Main ");
                            getch();

            }

            return;
}
