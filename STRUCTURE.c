#include<stdio.h>
#include<stdlib.h>

struct staff{
char name[50];
int id;
float salary;

}workerInfo[1000];
int index = 0;
void InsertInfo(int i)
{
    printf("Enter id: ");
    scanf("%d", &workerInfo[i].id);
    fflush(stdin);
    printf("Enter name: ");
    gets(workerInfo[i].name);
    printf("Enter salary: ");
    scanf("%f",&workerInfo[i].salary);

}
void display(int j)
{
    for(int i=0; i<j;i++)
    {
        printf("ID: %d \n", &workerInfo[i].id);
        printf("Name: %c \n", &workerInfo[i].name);
        printf("Salary: %f \n", &workerInfo[i].salary);
        break;

    }
}
void update()
{
    int id;
    printf("Enter worker id: ");
    scanf("%d",&id);
    system("cls");
    for(int i=0; i<index; i++)
    {
        if(workerInfo[i].id==id)
        {
            printf("\n name: ");
            scanf("%s",&workerInfo[i]);
            printf("\n salary : ");
            scanf("%f",&workerInfo[i].salary);
        }
    }
}
int main()
{
    int choich;
    while(1){
        system("cls");
        printf("choose option: \n" "1.add wroker info \n" "2.Display Worker info \n" "3.update worker \n" "4.Exit \n\n");
       scanf("%d",&choich);

       switch(choich)
       {
       case 1:
        InsertInfo(index++);
        break;
       case 2:
        display(index);
        break;
       case 3:
        update();
        break;
        case 4:
        exit(0);
        break;
        default:
            printf("Invalid input \n\n");

       }
       printf("enter any key for continue >> ");
       getch();
    }
    return 0;
}
