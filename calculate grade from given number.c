#include <stdio.h>

int main()
{
    int YourNumber;
    printf("Enter Math your number:\n");
    scanf("%d",&YourNumber);

       if(YourNumber<33)
       {
           printf("Sorry! you are failed.You need to practice more and more.\n");
       }
      else
       {
           printf("you are passed.");
           if(YourNumber>=80 )
            {
                printf("And Congrats!!!You got an A+\n");
            }
           else if(YourNumber>=70 )
           {
                printf("And Congrats!!!You got an A\n");
           }
       }
    return 0;
}
