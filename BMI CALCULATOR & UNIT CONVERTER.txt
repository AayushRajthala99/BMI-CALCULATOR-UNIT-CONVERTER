#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int I,A,B,C,L,M,T,U; //Variables assigned for switch case statements...
float m,kg,f,i,p,TH,BMI1,BMI2; //Variables assigned for BMI CALCULATOR...
float cm1,m2,km3,M4,g1,kg2,q3,p4,s1,mi2,h3,d4; //Variables assigned for the Results of UNIT CONVERTER...
float cm2,cm3,cm4,m1,m3,m4,km1,km2,km4,M1,M2,M3,g2,g3,g4,kg1,kg3,kg4,q1,q2,q4,p1,p2,p3,s2,s3,s4,mi1,mi3,mi4,h1,h2,h4,d1,d2,d3; //Variables assigned for calculation in UNIT CONVERTER...
int choice;//Variable assigned for exit statement...
char a;
char *newusername[25];
char *newpassword[25];
char *username[25];
char *password[25];

int main()
{
    printf("                            !!! WELCOME TO THE BMI CALCULATOR & UNIT CONVERTER !!!");
    check1:printf("                     \n\n                                  !!!THE AVAILABLE OPTIONS ARE AS FOLLOWS!!!\n\n");
    printf("                                        1. UNIT CONVERTER    (PRESS 1)\n");
    printf("                                        2. BMI CALCULATOR    (PRESS 2)\n");
    printf("                                        3. ACCESS LIBRARY    (PRESS 3)\n");
    printf("                                        4. EXIT THE PROGRAM  (PRESS 4)\n");
    printf("                        \n\n                            !!!SELECT YOUR DESIRED CHOICE FROM THE OPTIONS ABOVE!!!\n");
    printf("\n                                         ENTER YOUR DECISION : ");
    scanf(" %d",&I);
    if (I==1||I==2||I==3||I==4){
    switch(I)
    {
        case (1):
        //UNIT CONVERTER
        printf("                        \n\n                                      !!!WELCOME TO THE UNIT CONVERTER!!!\n\n");
        check2:printf("                     \n                                !!!THE AVAILABLE UNIT CONVERSION ARE AS FOLLOWS!!!\n\n");
        printf("                                        1. CONVERSION OF LENGTH  (PRESS 1)\n");
        printf("                                        2. CONVERSION OF MASS    (PRESS 2)\n");
        printf("                                        3. CONVERSION OF TIME    (PRESS 3)\n");
        printf("\n                                          ENTER YOUR DESIRED OPERATION :");
        scanf("%d",&A);
        if (A==1||A==2||A==3){
        switch(A)

        {


            case (1):
            //CONVERSION OF LENGTH
            checkL:printf("\n                                        1. CENTIMETERS   (PRESS 1)\n");
            printf("                                        2. METERS        (PRESS 2)\n");
            printf("                                        3. KILOMETERS    (PRESS 3)\n");
            printf("                                        4. MILES         (PRESS 4)\n");
            printf("\n                                !!!CHOOSE THE UNIT OF CONVERSION FOR LENGTH!!! :");
            scanf("%d",&L);
            if (L==1||L==2||L==3||L==4){
            switch(L)

            {
                case (1):
                printf("\n                                        Enter the Length in Centimeters: ");
                scanf("%f",&cm1);
                m1=(cm1/100);
                printf("\n                                      %f Centimeters = %f Meters",cm1,m1);
                km1=(cm1/100000);
                printf("\n                                      %f Centimeters = %f Kilometers",cm1,km1);
                M1=(cm1/160934.4);
                printf("\n                                      %f Centimeters = %f Miles",cm1,M1);
                break;

                case (2):
                printf("\n                                        Enter the Length in Meters: ");
                scanf("%f",&m2);
                cm2=(m2*100);
                printf("\n                                      %f Meters = %f Centimeters",m2,cm2);
                km2=(m2/1000);
                printf("\n                                      %f Meters = %f Kilometers",m2,km2);
                M2=(m2/1609.344);
                printf("\n                                      %f Meters = %f Miles",m2,M2);
                break;

                case (3):
                printf("\n                                        Enter the Length in Kilometers: ");
                scanf("%f",&km3);
                cm3=(km3*100000);
                printf("\n                                      %f Kilometers = %f Centimeters",km3,cm3);
                m3=(km3*1000);
                printf("\n                                      %f Kilometers = %f Meters",km3,m3);
                M3=(km3/1.609);
                printf("\n                                      %f Kilometers = %f Miles",km3,M3);
                break;

                case (4):
                printf("\n                                        Enter the Length in Miles: ");
                scanf("%f",&M4);
                cm4=(M4*160900);
                printf("\n                                      %f Miles = %f Centimeters",M4,cm4);
                m4=(M4*1609);
                printf("\n                                      %f Miles = %f Meters",M4,m4);
                km4=(M4*1.609);
                printf("\n                                      %f Miles = %f Kilometers",M4,km4);
                break;

            }
            printf("\n                                        Press 'H' = 'Go To Homepage'\n");
            printf("\n                              Press any other keyword to Exit The Program....\n");
            printf("\n                                           Enter Your Keyword: ");
            getchar();
            a=getchar();
            if(a=='H'||a=='h')
            {goto check1;}
            else
            {goto No;}

            break;
            }
            else if(L!=getchar())
            {
            printf("\n");
            printf("                                                   !!!ERROR!!!");
            printf("\n                                                !!!WRONG INPUT!!!");
            printf("\n                                              SELECT YOUR OPTION AGAIN");
            printf("\n");
            goto checkL;
            }
            case (2):
            //CONVERSION OF MASS
            checkM:printf("\n                                        1. GRAMS      (PRESS 1)\n");
            printf("                                        2. KILOGRAMS  (PRESS 2)\n");
            printf("                                        3. QUINTALS   (PRESS 3)\n");
            printf("                                        4. POUNDS     (PRESS 4)\n");
            printf("\n                                 !!!CHOOSE THE UNIT OF CONVERSION FOR MASS!!! :");
            scanf("%d",&M);
            if (M==1||M==2||M==3||M==4){
            switch(M)

            {

                case (1):
                printf("\n                                         Enter the Mass in grams: ");
                scanf("%f",&g1);
                kg1=(g1/1000);
                printf("\n                                       %f Grams = %f Kilograms",g1,kg1);
                q1=(g1/100000);
                printf("\n                                       %f Grams = %f Quintals",g1,q1);
                p1=(g1/453.592);
                printf("\n                                       %f Grams = %f Pounds",g1,p1);
                break;

                case (2):
                printf("\n                                         Enter the Mass in Kilograms: ");
                scanf("%f",&kg2);
                g2=(kg2*1000);
                printf("\n                                       %f Kilograms = %f Grams",kg2,g2);
                q2=(kg2/100);
                printf("\n                                       %f Kilograms = %f Quintals",kg2,q2);
                p2=(kg2*2.205);
                printf("\n                                       %f Kilograms = %f Pounds",kg2,p2);
                break;

                case (3):
                printf("\n                                         Enter the Mass in Quintals: ");
                scanf("%f",&q3);
                g3=(q3*100000);
                printf("\n                                       %f Quintals = %f Grams",q3,g3);
                kg3=(q3*100);
                printf("\n                                       %f Quintals = %f Kilograms",q3,kg3);
                p3=(q3*220.462);
                printf("\n                                       %f Quintals = %f Pounds",q3,p3);
                break;

                case (4):
                printf("\n                                         Enter the Mass in Pounds: ");
                scanf("%f",&p4);
                g4=(p4*453.592);
                printf("\n                                       %f Pounds = %f Grams",p4,g4);
                kg4=(p4/2.205);
                printf("\n                                       %f Pounds = %f Kilograms",p4,kg4);
                q4=(p4/220.462);
                printf("\n                                       %f Pounds = %f Quintals",p4,q4);
                break;

            }
            printf("\n                                        Press 'H' = 'Go To Homepage'\n");
            printf("\n                              Press any other keyword to Exit The Program....\n");
            printf("\n                                           Enter Your Keyword: ");
            getchar();
            a=getchar();
            if(a=='H'||a=='h')
            {goto check1;}
            else
            {goto No;}
            }
            else if (M!=getchar())
            {
            printf("\n");
            printf("                                                    !!!ERROR!!!");
            printf("\n                                                 !!!WRONG INPUT!!!");
            printf("\n                                              SELECT YOUR OPTION AGAIN");
            printf("\n");
            goto checkM;
            }
            case (3):
            //CONVERSION OF TIME
            checkT:printf("\n                                        1. SECONDS      (PRESS 1)\n");
            printf("                                        2. MINUTES      (PRESS 2)\n");
            printf("                                        3. HOURS        (PRESS 3)\n");
            printf("                                        4. DAYS         (PRESS 4)\n");
            printf("\n                                    !!!CHOOSE THE UNIT OF CONVERSION FOR TIME!!! :");
            scanf("%d",&T);
            if (T==1||T==2||T==3||T==4){
            switch(T)

            {

            case (1):
            printf("\n                                          Enter the Time in Seconds: ");
            scanf("%f",&s1);
            mi1=(s1/60);
            printf("\n                                        %f Seconds = %f Minutes",s1,mi1);
            h1=(s1/3600);
            printf("\n                                        %f Seconds = %f Hours",s1,h1);
            d1=(s1/86400);
            printf("\n                                        %f Seconds = %f Day/(s)",s1,d1);
            break;

            case (2):
            printf("\n                                         Enter the Time in Minutes: ");
            scanf("%f",&mi2);
            s2=(mi2*60);
            printf("\n                                        %f Minutes = %f Seconds",mi2,s2);
            h2=(mi2/60);
            printf("\n                                        %f Minutes = %f Hours",mi2,h2);
            d2=(mi2/14400);
            printf("\n                                        %f Minutes = %f Day/(s)",mi2,d2);
            break;

            case (3):
            printf("\n                                          Enter the Time in Hours: ");
            scanf("%f",&h3);
            s3=(h3*3600);
            printf("\n                                        %f Hours = %f Seconds",h3,s3);
            mi3=(h3*60);
            printf("\n                                        %f Hours = %f Minutes",h3,mi3);
            d3=(h3/24);
            printf("\n                                        %f Hours = %f Day/(s)",h3,d3);
            break;

            case (4):
            printf("\n                                        Enter the Time in Day/(s): ");
            scanf("%f",&d4);
            s4=(d4*86400);
            printf("\n                                        %f Day/(s) = %f Seconds",d4,s4);
            mi4=(d4*1440);
            printf("\n                                        %f Day/(s) = %f Minutes",d4,mi4);
            h4=(d4*24);
            printf("\n                                        %f Day/(s) = %f Hours",d4,h4);
            break;

            }
            printf("\n                                        Press 'H' = 'Go To Homepage'\n");
            printf("\n                              Press any other keyword to Exit The Program....\n");
            printf("\n                                           Enter Your Keyword: ");
            getchar();
            a=getchar();
            if(a=='H'||a=='h')
            {goto check1;}
            else
            {goto No;}
            break;
            }
            else if(T!=getchar())
            {
            printf("\n");
            printf("                                                  !!!ERROR!!!");
            printf("\n                                               !!!WRONG INPUT!!!");
            printf("\n                                            SELECT YOUR OPTION AGAIN");
            printf("\n");
            goto checkT;
            }
        }

        break;

        }

        else if (A!=getchar())

        {
        printf("\n");
        printf("\n                                                   !!!ERROR!!!\n");
        printf("                                                !!!WRONG INPUT!!!\n");
        printf("                                            SELECT YOUR OPTION AGAIN\n");
        goto check2;

        }

        case (2):
        //BMI CALCULATOR
        printf("                        \n\n                                      !!!WELCOME TO THE BMI CALCULATOR!!!\n\n");
        check3:printf("                     \n                                !!!THE AVAILABLE UNITS FOR INPUT ARE AS FOLLOWS!!!\n\n");
        printf("                               1. MKS(HEIGHT IN METER , MASS IN KILOGRAM) (PRESS 1)\n");
        printf("                               2. FPS(HEIGHT IN FOOT , MASS IN POUNDS)    (PRESS 2)\n");
        printf("\n                                          ENTER YOUR DESIRED OPERATION :");
        scanf("%d",&U);
        if (U==1||U==2)
        {
            switch(U)
            {
            case (1):
                printf("\n\n");
                printf("\n                                          Enter Height in Meters : ");
                scanf("%f",&m);
                printf("\n                                          Enter Weight in Kilograms : ");
                scanf("%f",&kg);
                BMI1=((kg)/(m*m));
                printf("\n                                          Your BMI INDEX is : %f",BMI1);
                printf("\n                                          You are  : ");
                if(BMI1>0 && BMI1<=18.5){printf("UNDER WEIGHT");}
                else if(BMI1>18.5 && BMI1<=24.9){printf("NORMAL WEIGHT");}
                else if(BMI1>25.0 && BMI1<=29.9){printf("OVER WEIGHT");}
                else if(BMI1>30.0 && BMI1<=34.9){printf("CLASS I OBESITY");}
                else if(BMI1>35 && BMI1<=39.9){printf("CLASS II OBESITY");}
                else {printf("CLASS III OBESITY");}
                printf("\n                                        Press 'H' = 'Go To Homepage'\n");
                printf("\n                              Press any other keyword to Exit The Program....\n");
                printf("\n                                           Enter Your Keyword: ");
                getchar();
                a=getchar();
                if(a=='H'||a=='h')
                {goto check1;}
                else
                {goto No;}
                break;
                case (2):
                printf("\n\n");
                printf("                                          NOTE : 1 FEET = 12 INCHES");
                printf("\n                                          Enter Height in Foot : ");
                scanf("%f",&f);
                printf("\n                                          Enter Height in Inches: ");
                scanf("%f",&i);
                TH=(i+f*12);
                printf("\n                                          Your Total Height in Inches is : %f",TH);
                printf("\n                                          NOTE : 1 KG = 2.204 POUNDS");
                printf("\n                                          Enter Weight in Pounds : ");
                scanf("%f",&p);
                BMI2=(((p)/(TH*TH))*703);
                printf("\n                                          Your BMI INDEX is : %f",BMI2);
                printf("\n                                          You are  : ");
                if(BMI2>0 && BMI2<18.5){printf("UNDER WEIGHT");}
                else if(BMI2>18.5 && BMI2<=24.9){printf("NORMAL WEIGHT");}
                else if(BMI2>25.0 && BMI2<=29.9){printf("OVER WEIGHT");}
                else if(BMI2>30.0 && BMI2<=34.9){printf("CLASS I OBESITY");}
                else if(BMI2>35 && BMI2<=39.9){printf("CLASS II OBESITY");}
                else {printf("CLASS III OBESITY");}
                printf("\n                                        Press 'H' = 'Go To Homepage'\n");
                printf("\n                              Press any other keyword to Exit The Program....\n");
                printf("\n                                           Enter Your Keyword: ");
                getchar();
                a=getchar();
                if(a=='H'||a=='h')
                {goto check1;}
                else
                {goto No;}
                break;
            }
        }
        else if (U!=getchar())

        {
        printf("\n");
        printf("                                                  !!!ERROR!!!");
        printf("\n                                               !!!WRONG INPUT!!!");
        printf("\n                                            SELECT YOUR OPTION AGAIN");
        printf("\n");
        goto check3;
        }
        break;
        case (3):
        //ACCESS THE LIBRARY FOR SAVED DATA

        break;

        case (4):
        //EXIT THE PROGRAM
        choice = I;
        if(choice=='4')
            {exit(0);}
        No:exit(0);
        break;
        }
        }

        else if (I!=getchar())

        {
        printf("\n");
        printf("                                                  !!!ERROR!!!");
        printf("\n                                               !!!WRONG INPUT!!!");
        printf("\n                                            SELECT YOUR OPTION AGAIN");
        printf("\n");
        goto check1;
        }
    return 0;

}
