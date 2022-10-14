#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
char name[15],email[35];
printf("\n\n\n");
printf("              Welcome To Our Game\n\n\n");
printf("          ---------------------------------\n");
printf("              Please Registration Yourself!!\n\n");
printf("          ---------------------------------\n");
printf("          Enter Name: ");
gets(name);
printf("          Enter your email: ");
gets(email);
system("cls");
printf("\n\n\n");
printf("             WELCOME!!   These are 5 Ques with a different manner\n\n");
printf("             You will be asked About the blank space in the word and you          \n\n");
printf("             must type the correct word to have marks ,you only have 4 heart      \n\n");
printf("             for each question and each time you miss you lose one heart and      \n\n");
printf("             also 2 points.Each question will be asked till you have heart.If you \n\n");
printf("             lose all heart than it will automatic skip to the next Question.      \n\n");
getch();

char Q1[5]="star",Q2[6]="camel",Q3[6]="apple",Q4[6]="store",Q5[5]="boat";

char L1,L2,L3,L4;
int chansq1=4,chansq2=4,chansq3=4,chansq4=4,chansq5=4;
int mark=0;
L:
    Q1:
    system("cls");
    printf("\n\n\n");
  if(chansq2==4)
    printf("                %c%c%c%c\n",3,3,3,3);
    else if(chansq1==3)
    printf("                %c%c%c\n",3,3,3);
    else if(chansq1==2)
    printf("                %c%c\n",3,3);
    else if(chansq1==1)
    printf("                %c\n",3);
    else if(chansq1==0)
    goto Q2;
    printf("        Ques no 1:\n");
    printf("        Complete the missing letter:   s _ ar which letter is in the blank?\n");
    printf("        F blank: ");
    scanf("         %c",&L1);
    if(L1==Q1[1])
    {
        printf("              Correct!! The word is[%s]\n\n" , Q1);
    if(chansq1==4)
        mark+=10;
    else if(chansq1==3)
    mark+=8;
    else if(chansq1==2)
    mark+=6;
    else if(chansq1==1)
    mark+=4;
    }
    else{
        chansq1--;
        goto Q1;
    }
    printf("              press any key to start next Ques\n\n");
    getch();


    Q2:
        system("cls");
    printf("\n\n");
    if(chansq2==4)
    printf("                %c%c%c%c\n",3,3,3,3);
    else if(chansq2==3)
    printf("                %c%c%c\n",3,3,3);
    else if(chansq2==2)
    printf("                %c%c\n",3,3);
    else if(chansq2==1)
    printf("                %c\n",3);
    else if(chansq2==0)
    goto Q3;
    printf("        Ques no 2:\n");
    printf("        Complete the missing letter:   c a _ e l which letter is in the blank?\n");
    printf("        F blank:\n");
    scanf("         %c",&L1);
    if(L1==Q2[2])
    {
        printf("              Correct!! The word is[%s]\n\n" , Q2);
    if(chansq2==4)
        mark+=10;
    else if(chansq2==3)
    mark+=8;
    else if(chansq2==2)
    mark+=6;
    else if(chansq2==1)
    mark+=4;
    }
    else{
        chansq2--;
        goto Q2;
    }
    printf("              press any key to start next Ques\n\n");
    getch();


    Q3:
        system("cls");
    printf("\n\n");
    if(chansq3==4)
    printf("                %c%c%c%c\n",3,3,3,3);
    else if(chansq3==3)
    printf("                %c%c%c\n",3,3,3);
    else if(chansq3==2)
    printf("                %c%c\n",3,3);
    else if(chansq3==1)
    printf("                %c\n",3);
    else if(chansq3==0)
    goto Q4;
    printf("        Ques no 3:\n");
    printf("        Complete the missing letter:   ap _ _ e which letter is in the blank?\n");
    printf("        F blank: \n");
    scanf("         %c",&L1);
    printf("        S blank: ");
    scanf("         %c",&L2);
    if(L1==Q3[2]&&L2==Q3[3])
    {
        printf("              Correct!! The word is[%s]\n\n",Q3);
    if(chansq3==4)
        mark+=10;
    else if(chansq3==3)
    mark+=8;
    else if(chansq3==2)
    mark+=6;
    else if(chansq3==1)
    mark+=4;
    }
    else{
        chansq3--;
        goto Q3;
    }
    printf("              press any key to start next Ques\n\n");
    getch();


    Q4:
        system("cls");
    printf("\n\n");
    if(chansq4==4)
    printf("                %c%c%c%c\n",3,3,3,3);
    else if(chansq4==3)
    printf("                %c%c%c\n",3,3,3);
    else if(chansq4==2)
    printf("                %c%c\n",3,3);
    else if(chansq4==1)
    printf("                %c\n",3);
    else if(chansq4==0)
    goto Q5;
    printf("        Ques no 4:\n");
    printf("        Complete the missing letter:   s _ ore which letter is in the blank?\n");
    printf("        F blank:\n");
    scanf("         %c",&L1);
    if(L1==Q4[1])
    {
        printf("              Correct!! The word is[%s]\n\n",Q2);
    if(chansq4==4)
        mark+=10;
    else if(chansq4==3)
    mark+=8;
    else if(chansq4==2)
    mark+=6;
    else if(chansq4==1)
    mark+=4;
    }
    else{
        chansq4--;
        goto Q4;
    }
    printf("              press any key to start next Ques\n\n");
    getch();

    Q5:
        system("cls");
    printf("\n\n");
    if(chansq5==4)
    printf("                %c%c%c%c\n",3,3,3,3);
    else if(chansq5==3)
    printf("                %c%c%c\n",3,3,3);
    else if(chansq5==2)
    printf("                %c%c\n",3,3);
    else if(chansq5==1)
    printf("                %c\n",3);
    else if(chansq5==0)
    goto Q5;
    printf("        Ques no 5:\n");
    printf("        Complete the missing letter:   b _ at which letter is in the blank?\n");
    printf("        F blank:\n");
    scanf("         %c",&L1);
    if(L1==Q5[1])
    {
        printf("              Correct!! The word is [%s]\n\n",Q5);
    if(chansq5==4)
        mark+=10;
    else if(chansq5==3)
    mark+=8;
    else if(chansq5==2)
    mark+=6;
    else if(chansq5==1)
    mark+=4;
    }
    else{
        chansq5--;
        goto Q5;
    }


close:
    system("cls");
    printf("\n\n\n");

    for(int a=0;a>=0;a--){
        for(int b=0;b>=0;b--)
        {
          for(int c=5;c>=0;c--)
          {
             for(int d=60;d>=0;d--)
             {
                 printf("\n\n\n");
                 printf("The Result will be published within 6 sec \n\n\n");
                 printf("                 Hr Min sec msec \n\n");
                 printf("                 %d: %d: %d: %d Timer",a,b,c,d);
                 system("cls");

             }
          }
        }
    }

    r:
           printf("\n\n\n");
           if(mark>=40)
            printf("     Brilliant !! \n\n\n");

           else if(mark>=35)
            printf("     Very Good !! \n\n\n");
             else if(mark>=30)
            printf("     Good !! \n\n\n");
             else if(mark>=25)
            printf("     Not Bad !! \n\n\n");
             else if(mark>=20|| mark<=20)
            printf("    Game over! try again!! \n\n\n");
            int last;
            printf(" Name: %s \n",name);
            printf(" Total marks: %d \n",mark);
            printf(" Press 1 for again and 2 for Exit");
           scanf("%d",&last);

           if("last==1")
            goto L;
           else if("last==2")
            goto Exit;
           else
            goto r;
           Exit:
               system("cls");
                printf("\n\n\n");
                printf("   Have a nice day %s",name);
}
