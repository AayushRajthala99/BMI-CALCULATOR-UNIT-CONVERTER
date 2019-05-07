#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int I,A,B,C,L,M,T,U; //Variables assigned for switch case statements...
struct bmi{
    float CMB,m,kg,f,i,p,TH1,TH2,BMI1,BMI2; //Variables assigned for BMI CALCULATOR...
   char fname[20];char lname[20];
};
struct bmi1
{
  float f,i,p,TH2,BMI2; //Variables assigned for BMI CALCULATOR...
   char fname[20];char lname[20];
};

float cm1,m2,km3,M4,g1,kg2,q3,p4,s1,mi2,h3,d4; //Variables assigned for the Results of UNIT CONVERTER...
float cm2,cm3,cm4,m1,m3,m4,km1,km2,km4,M1,M2,M3,g2,g3,g4,kg1,kg3,kg4,q1,q2,q4,p1,p2,p3,s2,s3,s4,mi1,mi3,mi4,h1,h2,h4,d1,d2,d3; //Variables assigned for calculation in UNIT CONVERTER...
int choice;//Variable assigned for exit statement...
FILE *admin;char password[30];char username[30];//Variables assigned for access library...
FILE *b;
char a,o,z,y,x,w,u,v;
int main()
{
    struct bmi as;
    struct bmi1 bs;
    H1:printf("                                ............................................\n");
    printf("                            !!! WELCOME TO THE BMI CALCULATOR & UNIT CONVERTER !!!");
    check1:printf("\n\n                                  !!!THE AVAILABLE OPTIONS ARE AS FOLLOWS!!!\n\n");
    printf("                                        1. UNIT CONVERTER    (PRESS 1)\n");
    printf("                                        2. BMI CALCULATOR    (PRESS 2)\n");
    printf("                                        3. ACCESS LIBRARY    (PRESS 3)\n");
    printf("                                        4. EXIT THE PROGRAM  (PRESS 4)\n");
    printf("                                ............................................");
    printf("\n\n                            !!!SELECT YOUR DESIRED CHOICE FROM THE OPTIONS ABOVE!!!\n");
    printf("                                ............................................");
    printf("\n                                         ENTER YOUR DECISION : ");
    scanf(" %d",&I);
    system("cls");
    if (I==1||I==2||I==3||I==4){
    switch(I)
    {
        case (1):
        //UNIT CONVERTER
        U1:printf("                                ............................................\n");
        printf("\n\n                                      !!!WELCOME TO THE UNIT CONVERTER!!!\n\n");
        check2:printf("\n                                !!!THE AVAILABLE UNIT CONVERSION ARE AS FOLLOWS!!!\n\n");
        printf("                                        1. CONVERSION OF LENGTH  (PRESS 1)\n");
        printf("                                        2. CONVERSION OF MASS    (PRESS 2)\n");
        printf("                                        3. CONVERSION OF TIME    (PRESS 3)\n");
        printf("                                ............................................");
        printf("\n                                          ENTER YOUR DESIRED OPERATION :");
        scanf("%d",&A);
        system("cls");
        if (A==1||A==2||A==3){
        switch(A)

        {


            case (1):
            //CONVERSION OF LENGTH
            checkL:printf("\n");
            printf("                                ............................................");
            printf("\n                                        1. CENTIMETERS   (PRESS 1)\n");
            printf("                                        2. METERS        (PRESS 2)\n");
            printf("                                        3. KILOMETERS    (PRESS 3)\n");
            printf("                                        4. MILES         (PRESS 4)\n");
            printf("                                ............................................");
            printf("\n                                !!!CHOOSE THE UNIT OF CONVERSION FOR LENGTH!!! :");
            scanf("%d",&L);
            system("cls");
            if (L==1||L==2||L==3||L==4){
            switch(L)

            {
                case (1):
                L1:cm1=0;
                printf("\n");
                printf("                                ............................................\n");
                printf("\n                                        Enter the Length in Centimeters: ");
                scanf("%f",&cm1);
                printf("\n                                            Are you sure (Y/N) :");
                getchar();
                z=getchar();
                printf("\n                                ............................................\n");
                if(z=='Y'||z=='y')
                {
                    printf("                                ............................................\n");
                    m1=(cm1/100);
                    printf("\n                                %.2f Centimeters = %f Meters",cm1,m1);
                    km1=(cm1/100000);
                    printf("\n                                %.2f Centimeters = %.2f Kilometers",cm1,km1);
                    M1=(cm1/160934.4);
                    printf("\n                                %.2f Centimeters = %.2f Miles",cm1,M1);
                    printf("\n");
                    printf("                                ............................................\n");
                }
                else if(z=='N'||z=='n'){system("cls");goto L1;}
                else
                {
                    printf("                                ............................................\n");
                    printf("\n                                             Wrong Input");
                    printf("\n                                      Reconsider Your Decision\n");
                    printf("                                ............................................\n");
                    goto L1;
                }
                break;

                case (2):
                L2: m2=0;
                printf("                                ............................................\n");
                printf("\n                                        Enter the Length in Meters: ");
                scanf("%f",&m2);
                printf("\n                                            Are you sure (Y/N) :");
                getchar();
                z=getchar();
                printf("\n");
                printf("                                ............................................\n");
                if(z=='Y'||z=='y')
                {
                printf("                                ............................................\n");
                cm2=(m2*100);
                printf("\n                                       %.2f Meters = %.2f Centimeters",m2,cm2);
                km2=(m2/1000);
                printf("\n                                       %.2f Meters = %.2f Kilometers",m2,km2);
                M2=(m2/1609.344);
                printf("\n                                       %.2f Meters = %.2f Miles",m2,M2);
                printf("\n                                ............................................\n");
                }
                else if(z=='N'||z=='n'){system("cls");goto L2;}
                else
                {
                    printf("                                ............................................\n");
                    printf("\n                                             Wrong Input");
                    printf("\n                                      Reconsider Your Decision\n");
                    printf("                                ............................................\n");
                    goto L2;
                }
                break;

                case (3):
                L3:km3=0;
                printf("\n                                ............................................\n");
                printf("\n                                        Enter the Length in Kilometers: ");
                scanf("%f",&km3);
                printf("\n                                           Are you sure (Y/N) :");
                getchar();
                z=getchar();
                printf("\n                                ............................................\n");
                if(z=='Y'||z=='y')
                {
                    printf("\n                                ............................................\n");
                    cm3=(km3*100000);
                    printf("\n                                   %.2f Kilometers = %.2f Centimeters",km3,cm3);
                    m3=(km3*1000);
                    printf("\n                                   %.2f Kilometers = %.2f Meters",km3,m3);
                    M3=(km3/1.609);
                    printf("\n                                   %.2f Kilometers = %.2f Miles",km3,M3);
                    printf("\n                                ............................................\n");
                }
                else if(z=='N'||z=='n'){system("cls");goto L3;}
                else
                {
                    printf("                                ............................................\n");
                    printf("\n                                             Wrong Input");
                    printf("\n                                      Reconsider Your Decision\n");
                    printf("                                ............................................\n");
                    goto L3;
                }
                break;

                case (4):
                L4:M4=0;
                printf("                                ............................................\n");
                printf("\n                                        Enter the Length in Miles: ");
                scanf("%f",&M4);
                printf("\n                                           Are you sure (Y/N) :");
                getchar();
                z=getchar();
                printf("\n");
                printf("                                ............................................\n");
                if(z=='Y'||z=='y')
                {
                    printf("                                ............................................\n");
                    cm4=(M4*160900);
                    printf("\n                                %.2f Miles = %.2f Centimeters",M4,cm4);
                    m4=(M4*1609);
                    printf("\n                                %.2f Miles = %.2f Meters",M4,m4);
                    km4=(M4*1.609);
                    printf("\n                                %.2f Miles = %.2f Kilometers",M4,km4);
                    printf("\n                                ............................................\n");
                }
                else if(z=='N'||z=='n'){system("cls");goto L4;}
                else
                {
                    printf("                                ............................................\n");
                    printf("\n                                             Wrong Input");
                    printf("\n                                      Reconsider Your Decision\n");
                    printf("                                ............................................\n");
                    goto L4;
                }
                break;

            }
            printf("                                ............................................");
            printf("\n\n                                        Press 'H' = 'Go To Homepage'");
            printf("\n\n                                     Press 'U' = 'Go To Unit Converter'");
            printf("\n                                  Press any other keyword to Exit The Program\n");
            printf("                                ............................................");
            printf("\n                                           Enter Your Keyword: ");
            getchar();
            a=getchar();
            system("cls");
            if(a=='H'||a=='h')
            {system("cls");goto H1;}
            else if(a=='U'||a=='u')
            {system("cls");goto U1;}
            else
            {goto No;}

            break;
            }
            else if(L!=getchar())
            {
            printf("                                ............................................\n");
            printf("                                                   !!!ERROR!!!");
            printf("\n                                                !!!WRONG INPUT!!!\n");
            printf("                                ............................................\n");
            printf("\n                                              SELECT YOUR OPTION AGAIN");
            goto checkL;
            }
            case (2):
            //CONVERSION OF MASS
            checkM:printf("                                ............................................\n");
            printf("\n                                        1. GRAMS      (PRESS 1)\n");
            printf("                                        2. KILOGRAMS  (PRESS 2)\n");
            printf("                                        3. QUINTALS   (PRESS 3)\n");
            printf("                                        4. POUNDS     (PRESS 4)\n");
            printf("                                ............................................\n");
            printf("\n                                 !!!CHOOSE THE UNIT OF CONVERSION FOR MASS!!! :");
            scanf("%d",&M);
            system("cls");
            if (M==1||M==2||M==3||M==4){
            switch(M)

            {

                case (1):
                M1:printf("                                ............................................\n");
                printf("\n                                         Enter the Mass in grams: ");
                scanf("%f",&g1);
                printf("\n                                            Are you sure (Y/N) :");
                getchar();
                z=getchar();
                printf("\n                                ............................................\n");
                if(z=='Y'||z=='y')
                {
                    printf("\n                                ............................................\n");
                    kg1=(g1/1000);
                    printf("\n                                      %.2f Grams = %.2f Kilograms",g1,kg1);
                    q1=(g1/100000);
                    printf("\n                                      %.2f Grams = %.2f Quintals",g1,q1);
                    p1=(g1/453.592);
                    printf("\n                                      %.2f Grams = %.2f Pounds",g1,p1);
                    printf("\n                                ............................................\n");
                }
                else if(z=='N'||z=='n'){system("cls");goto M1;}
                else
                {
                    printf("                                ............................................\n");
                    printf("\n                                             Wrong Input");
                    printf("\n                                      Reconsider Your Decision\n");
                    printf("                                ............................................\n");
                    goto M1;
                }
                break;


                case (2):
                M2:printf("                                ............................................\n");
                printf("\n                                         Enter the Mass in Kilograms: ");
                scanf("%f",&kg2);
                printf("\n                                            Are you sure (Y/N) :");
                getchar();
                z=getchar();
                printf("\n                                ............................................\n");
                if(z=='Y'||z=='y')
                {
                    printf("\n                                ............................................\n");
                    g2=(kg2*1000);
                    printf("\n                                      %.2f Kilograms = %.2f Grams",kg2,g2);
                    q2=(kg2/100);
                    printf("\n                                      %.2f Kilograms = %.2f Quintals",kg2,q2);
                    p2=(kg2*2.205);
                    printf("\n                                      %.2f Kilograms = %.2f Pounds",kg2,p2);
                    printf("\n                                ............................................\n");
                }
                else if(z=='N'||z=='n'){system("cls");goto M2;}
                else
                {
                    printf("\n                                ............................................\n");
                    printf("\n                                             Wrong Input");
                    printf("\n                                      Reconsider Your Decision\n");
                    printf("\n                                ............................................\n");
                    goto M2;
                }
                break;

                case (3):
                M3:printf("                                ............................................\n");
                printf("\n                                         Enter the Mass in Quintals: ");
                scanf("%f",&q3);
                printf("\n                                            Are you sure (Y/N) :");
                getchar();
                z=getchar();
                printf("\n                                ............................................\n");
                if(z=='Y'||z=='y')
                {
                    printf("\n                                ............................................\n");
                    g3=(q3*100000);
                    printf("\n                                         %.2f Quintals = %.2f Grams",q3,g3);
                    kg3=(q3*100);
                    printf("\n                                         %.2f Quintals = %.2f Kilograms",q3,kg3);
                    p3=(q3*220.462);
                    printf("\n                                         %.2f Quintals = %.2f Pounds",q3,p3);
                    printf("\n                                ............................................\n");
                }
                else if(z=='N'||z=='n'){system("cls");goto M3;}
                else
                {
                    printf("\n                                ............................................\n");
                    printf("\n                                             Wrong Input");
                    printf("\n                                      Reconsider Your Decision");
                    printf("\n                                ............................................\n");
                    goto M3;
                }
                break;

                case (4):
                M4:printf("                                ............................................\n");
                printf("\n                                         Enter the Mass in Pounds: ");
                scanf("%f",&p4);
                printf("\n                                            Are you sure (Y/N) :");
                getchar();
                z=getchar();
                printf("\n                                ............................................\n");
                if(z=='Y'||z=='y')
                {
                    printf("\n                                ............................................\n");
                    g4=(p4*453.592);
                    printf("\n                                          %.2f Pounds = %.2f Grams",p4,g4);
                    kg4=(p4/2.205);
                    printf("\n                                          %.2f Pounds = %.2f Kilograms",p4,kg4);
                    q4=(p4/220.462);
                    printf("\n                                          %.2f Pounds = %.2f Quintals",p4,q4);
                    printf("\n                                ............................................\n");
                }
                else if(z=='N'||z=='n'){system("cls");goto M4;}
                else
                {
                    printf("                                ............................................\n");
                    printf("\n                                             Wrong Input");
                    printf("\n                                      Reconsider Your Decision");
                    printf("\n                                ............................................\n");
                    goto M4;
                }
                break;

            }
            printf("\n                                ............................................");
            printf("\n\n                                        Press 'H' = 'Go To Homepage'");
            printf("\n\n                                     Press 'U' = 'Go To Unit Converter'");
            printf("\n                                  Press any other keyword to Exit The Program");
            printf("\n                                ............................................\n");
            printf("\n                                           Enter Your Keyword: ");
            getchar();
            a=getchar();
            if(a=='H'||a=='h')
            {system("cls");goto H1;}
            else if(a=='U'||a=='u')
            {system("cls");goto U1;}
            else
            {goto No;}
            }
            else if (M!=getchar())
            {

            printf("\n                                ............................................\n");
            printf("                                                    !!!ERROR!!!");
            printf("\n                                                 !!!WRONG INPUT!!!");
            printf("\n                                              SELECT YOUR OPTION AGAIN");
            printf("\n                                ............................................\n");
            goto checkM;
            }
            case (3):
            //CONVERSION OF TIME
            checkT:printf("                                ............................................\n");
            printf("\n                                        1. SECONDS      (PRESS 1)\n");
            printf("                                        2. MINUTES      (PRESS 2)\n");
            printf("                                        3. HOURS        (PRESS 3)\n");
            printf("                                        4. DAYS         (PRESS 4)\n");
            printf("                                ............................................\n");
            printf("\n                                    !!!CHOOSE THE UNIT OF CONVERSION FOR TIME!!! :");
            scanf("%d",&T);
            system("cls");
            if (T==1||T==2||T==3||T==4){
            switch(T)

            {

            case (1):
            T1:printf("                                ............................................\n");
            printf("\n                                          Enter the Time in Seconds: ");
            scanf("%f",&s1);
            printf("\n                                            Are you sure (Y/N) :");
            getchar();
            z=getchar();
            printf("\n");
            if(z=='Y'||z=='y')
            {
                printf("                                ............................................\n");
                mi1=(s1/60);
                printf("\n                                %.2f Seconds = %.2f Minutes",s1,mi1);
                h1=(s1/3600);
                printf("\n                                %.2f Seconds = %.2f Hours",s1,h1);
                d1=(s1/86400);
                printf("\n                                %.2f Seconds = %.2f Day/(s)",s1,d1);
                printf("\n                                ............................................\n");
            }
            else if(z=='N'||z=='n'){system("cls");goto T1;}
            else
                {
                    printf("                                ............................................\n");
                    printf("\n                                             Wrong Input");
                    printf("\n                                      Reconsider Your Decision\n");
                    printf("                                ............................................\n");
                    goto T1;
                }
            break;

            case (2):
            T2:printf("                                ............................................\n");
            printf("\n                                         Enter the Time in Minutes: ");
            scanf("%f",&mi2);
            printf("\n                                            Are you sure (Y/N) :");
            getchar();
            z=getchar();
            printf("\n");
            printf("                                ............................................\n");
            if(z=='Y'||z=='y')
            {
                s2=(mi2*60);
                printf("                                ............................................\n");
                printf("\n                                %.2f Minutes = %.2f Seconds",mi2,s2);
                h2=(mi2/60);
                printf("\n                                %.2f Minutes = %.2f Hours",mi2,h2);
                d2=(mi2/14400);
                printf("\n                                %.2f Minutes = %.2f Day/(s)",mi2,d2);
                printf("\n                                ............................................\n");
            }
            else if(z=='N'||z=='n'){system("cls");goto T2;}
            else
                {
                    printf("                                ............................................\n");
                    printf("\n                                             Wrong Input");
                    printf("\n                                      Reconsider Your Decision\n");
                    printf("                                ............................................\n");
                    goto T2;
                }
            break;

            case (3):
            T3:printf("                                ............................................\n");
            printf("\n                                          Enter the Time in Hours: ");
            scanf("%f",&h3);
            printf("\n                                            Are you sure (Y/N) :");
            getchar();
            z=getchar();
            if(z=='Y'||z=='y')
            {
                printf("\n                                ............................................\n");
                s3=(h3*3600);
                printf("\n                                          %.2f Hours = %.2f Seconds",h3,s3);
                mi3=(h3*60);
                printf("\n                                          %.2f Hours = %.2f Minutes",h3,mi3);
                d3=(h3/24);
                printf("\n                                          %.2f Hours = %.2f Day/(s)",h3,d3);
                printf("\n                                ............................................\n");
            }
            else if(z=='N'||z=='n'){system("cls");goto T3;}
            else
                {
                    printf("                                ............................................\n");
                    printf("\n                                             Wrong Input");
                    printf("\n                                      Reconsider Your Decision\n");
                    printf("                                ............................................\n");
                    goto T3;
                }
            break;

            case (4):
            T4:printf("                                ............................................");
            printf("\n                                        Enter the Time in Day/(s): ");
            scanf("%f",&d4);
            printf("\n                                            Are you sure (Y/N) :");
            getchar();
            z=getchar();
            printf("\n                                ............................................\n");
            if(z=='Y'||z=='y')
            {
                printf("\n                                ............................................\n");
                s4=(d4*86400);
                printf("\n                                        %.2f Day/(s) = %.2f Seconds",d4,s4);
                mi4=(d4*1440);
                printf("\n                                        %.2f Day/(s) = %.2f Minutes",d4,mi4);
                h4=(d4*24);
                printf("\n                                        %.2f Day/(s) = %.2f Hours",d4,h4);
                printf("\n                                ............................................\n");
            }
            else if(z=='N'||z=='n'){system("cls");goto T4;}
            else
                {
                    printf("\n                                ............................................\n");
                    printf("\n                                             Wrong Input");
                    printf("\n                                      Reconsider Your Decision");
                    printf("\n                                ............................................\n");
                    goto T4;
                }
            break;

            }
            printf("\n                                ............................................\n");
            printf("\n                                        Press 'H' = 'Go To Homepage'\n");
            printf("\n                                     Press 'U' = 'Go To Unit Converter'");
            printf("\n                                  Press any other keyword to Exit The Program");
            printf("\n                                ............................................\n");
            printf("\n                                           Enter Your Keyword: ");
            getchar();
            a=getchar();
            if(a=='H'||a=='h')
            {system("cls");goto H1;}
            else if(a=='U'||a=='u')
            {system("cls");goto U1;}
            else
            {system("cls");goto No;}
            }
            else if(T!=getchar())
            {
                printf("\n                                ............................................\n");
                printf("                                                  !!!ERROR!!!");
                printf("\n                                               !!!WRONG INPUT!!!");
                printf("\n                                            SELECT YOUR OPTION AGAIN");
                printf("\n                                ............................................\n");
                goto checkT;
            }
        }

        break;

        }

        else if (A!=getchar())

        {
            printf("\n                                ............................................");
            printf("\n                                                   !!!ERROR!!!");
            printf("\n                                                !!!WRONG INPUT!!!");
            printf("\n                                            SELECT YOUR OPTION AGAIN");
            printf("\n                                ............................................\n");
            goto check2;
        }

        case (2):
        //BMI CALCULATOR

        B1:
        printf("\n                                ............................................\n");
        printf("\n                                      !!!WELCOME TO THE BMI CALCULATOR!!!\n");
        check3:printf("\n                                !!!THE AVAILABLE UNITS FOR INPUT ARE AS FOLLOWS!!!\n");
        printf("\n                               1. MKS(HEIGHT IN METER , MASS IN KILOGRAM) (PRESS 1)\n");
        printf("\n                               2. FPS(HEIGHT IN FOOT , MASS IN POUNDS)    (PRESS 2)\n");
        printf("\n                                ............................................\n");
        printf("\n                                          ENTER YOUR DESIRED OPERATION :");
        scanf("%d",&U);
        system("cls");
        if (U==1||U==2)
        {
            switch(U)
            {
                case (1):
                admin = fopen("admin.txt","ab");
                printf("\n                                Enter Your First Name:");
                scanf("%s",as.fname);
                printf("\n                                Enter Your Surname:");
                scanf("%s",as.lname);
                strcat(as.fname,as.lname);
                as.CMB=0;
                printf("\n                                ............................................\n");
                printf("\n                                      NOTE : 1 Metre = 100 Centimeters");
                printf("\n                                ............................................\n");
                printf("\n                                      Enter Height in Centimeters : ");
                scanf("%f",&as.CMB);
                printf("\n                                ............................................");
                as.TH1=(as.CMB/100);
                printf("\n                                      Your Total Height in Metres is : %.2f",as.TH1);
                printf("\n                                ............................................\n");
                as.kg=0;
                printf("\n                                      Enter Weight in Kilograms : ");
                scanf("%f",&as.kg);
                as.BMI1=((as.kg)/(as.TH1*as.TH1));
                printf("\n                                ............................................");
                printf("\n                                          Your BMI INDEX is : %.2f",bs.BMI2);
                printf("\n                                          You are  : ");
                fwrite(&as,sizeof(as),1,admin);
                fclose(admin);
                if(as.BMI1>0 && as.BMI1<=18.5){printf("UNDER WEIGHT");}
                else if(as.BMI1>18.5 && as.BMI1<=24.9){printf("NORMAL WEIGHT");}
                else if(as.BMI1>25.0 && as.BMI1<=29.9){printf("OVER WEIGHT");}
                else if(as.BMI1>30.0 && as.BMI1<=34.9){printf("CLASS I OBESITY");}
                else if(as.BMI1>35 && as.BMI1<=39.9){printf("CLASS II OBESITY");}
                else {printf("CLASS III OBESITY");}
                printf("\n                                ............................................\n");
                printf("\n                                        Press 'H' = 'Go To Homepage'");
                printf("\n                                     Press 'B' = 'Go To BMI Converter'");
                printf("\n                                     Press 'U' = 'Go To Unit Converter'");
                printf("\n                                  Press any other keyword to Exit The Program");
                printf("\n                                ............................................\n");
                printf("\n                                           Enter Your Keyword: ");
                getchar();
                a=getchar();
                if(a=='H'||a=='h')
                {system("cls");goto H1;}
                else if(a=='B'||a=='b')
                {system("cls");goto B1;}
                else if(a=='U'||a=='u')
                {system("cls");goto U1;}
                else
                {system("cls");goto No;}
                break;
                case (2):
                b = fopen("admin2.txt","ab");
                printf("\n                                Enter Your First Name:");
                scanf("%s",bs.fname);
                printf("\n                                Enter Your Surname:");
                scanf("%s",bs.lname);
                strcat(bs.fname,bs.lname);
                printf("\n                                ............................................\n");
                printf("                                            NOTE : 1 FEET = 12 INCHES");
                printf("\n                                ............................................\n");
                bs.f=0;
                printf("\n                                Enter Height in Foot : ");
                scanf("%f",&bs.f);
                bs.i=0;
                printf("\n                                Enter Height in Inches: ");
                scanf("%f",&bs.i);
                bs.TH2=(bs.i+bs.f*12);
                printf("\n                                ............................................");
                printf("\n                                    Your Total Height in Inches is : %.2f",bs.TH2);
                printf("\n                                ............................................");
                printf("\n                                          NOTE : 1 KG = 2.204 POUNDS");
                printf("\n                                ............................................");
                bs.p=0;
                printf("\n                                          Enter Weight in Pounds : ");
                scanf("%f",&bs.p);
                bs.BMI2=(((bs.p)/(bs.TH2*bs.TH2))*703);
                printf("\n                                ............................................");
                printf("\n                                          Your BMI INDEX is : %.2f",bs.BMI2);
                printf("\n                                          You are  : ");
                fwrite(&bs,sizeof(bs),1,b);
                fclose(b);
                if(as.BMI2>0 && as.BMI2<18.5){printf("UNDER WEIGHT");}
                else if(as.BMI2>18.5 && as.BMI2<=24.9){printf("NORMAL WEIGHT");}
                else if(as.BMI2>25.0 && as.BMI2<=29.9){printf("OVER WEIGHT");}
                else if(as.BMI2>30.0 && as.BMI2<=34.9){printf("CLASS I OBESITY");}
                else if(as.BMI2>35 && as.BMI2<=39.9){printf("CLASS II OBESITY");}
                else {printf("CLASS III OBESITY");}
                printf("\n                                          ............................................");
                printf("\n\n                                          Press 'H' = 'Go To Homepage'");
                printf("\n\n                                          Press 'U' = 'Go To Unit Converter'");
                printf("\n                                          Press any other keyword to Exit The Program\n");
                printf("                                          ............................................");
                printf("\n                                          Enter Your Keyword: ");
                getchar();
                a=getchar();
                if(a=='H'||a=='h')
                {system("cls");goto H1;}
                else if(a=='B'||a=='b')
                {system("cls");goto U1;}
                else
                {system("cls");goto No;}
                break;
            }
        }
        else if (U!=getchar())

        {
        printf("\n");
        printf("                                ............................................\n");
        printf("                                                  !!!ERROR!!!");
        printf("\n                                               !!!WRONG INPUT!!!\n");
        printf("                                ............................................");
        printf("\n                                            SELECT YOUR OPTION AGAIN!");
        goto check3;
        }
        break;
        case (3):
        //Access the library for saved data...
        admin = fopen("admin.txt","r");
        b=fopen("admin2.txt","r");

        if (admin == NULL)
        {
            printf("Data can't be found:");
        }
        else
    {
            A1:printf("\n\n");
            printf("                                ............................................\n");
            printf("                                                [ADMIN LOGIN]\n");
            printf("                                ............................................\n");
            printf("                                         Enter your username : ");
            scanf("%s",username);
            if(strcmp(username,"admin")==0)
            {
                printf("\n                                         Enter your password : ");
                scanf("%s",password);
                printf("\n                                .............................................\n");

            if(strcmp(password,"default")==0)
                {
                    printf("                                ............................................\n");
                    printf("\n                                          !!!Welcome Login Success!!!\n\n");
                    printf("                                ............................................\n");
                    printf("                                        Press Any Key To Continue: ");
                    getchar();
                    o=getchar();
            if (o!='\0')
                 {
                     goto M7;
                 }
                 M7:system("cls");


                 while(fread(&as,sizeof(as),1,admin)==1)
                 {

                 printf("                                           Name: %s\n", as.fname);
                 printf("                                           Height in Metres: %.2f\n",as.TH1);
                 printf("                                           Weight in Kilograms: %.2f\n",as.kg);
                 printf("                                           BMI Score: %.2f\n", as.BMI1);
                 printf("\n\n");

                }
                 fclose(admin);



                while(fread(&bs,sizeof(bs),1,b)==1)
                 {
                 printf("                                           Name: %s\n", bs.fname);
                 printf("                                           Height in Inches: %.2f\n",bs.TH2);
                 printf("                                           Weight in Pounds: %.2f\n",bs.p);
                 printf("                                           BMI Score: %.2f\n", bs.BMI2);
                 printf("\n\n");
                 }

                fclose(b);
                printf("                                ............................................");
                printf("\n\n                                        Press 'H' = 'Go To Homepage'");
                printf("\n\n                                     Press 'U' = 'Go To Unit Converter'");
                printf("\n\n                                 Press any other keyword to Exit The Program\n");
                printf("                                ............................................");
                printf("\n                                           Enter Your Keyword: ");
                getchar();
                a=getchar();
                if(a=='H'||a=='h')
                {system("cls");goto H1;}
                else if(a=='B'||a=='b')
                {system("cls");goto U1;}
                else
                {system("cls");goto No;}
                break;
                }
            else
                {
                printf("\n");
                printf("                                ............................................\n");
                printf("\n                                             !!!WRONG PASSWORD!!!");
                printf("\n                                      !!!RE-ENTER USERNAME & PASSWORD!!!\n");
                printf("                                ............................................\n");
                goto A1;
                }
                }
             else
                {
                printf("                                ............................................\n");
                printf("\n                                               !!!WRONG USERNAME!!!");
                printf("\n                                             !!!RE-ENTER USERNAME!!!\n");
                printf("                                ............................................\n");
                goto A1;
                }
    }

        fclose(admin);
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
        printf("                                ............................................\n");
        printf("                                                  !!!ERROR!!!");
        printf("\n                                               !!!WRONG INPUT!!!\n");
        printf("                                ............................................");
        printf("\n                                            SELECT YOUR OPTION AGAIN!");
        goto check1;
        }
    return 0;
}
