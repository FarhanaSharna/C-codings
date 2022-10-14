#include<stdio.h>

int main()
{
    int i,j,a[100][100],NOR,NOC;

    printf("Enter the value:");
    scanf("%d %d",&NOR,&NOC);


    for(i=0;i<NOR;i++){
        for(j=0;j<NOC;j++){
            printf("a[%d][%d] = " ,i,j);
            scanf( "%d", &a[i][j] );
        }
        printf("\n");
    }

printf("a= ");
     for(i=0;i<NOR;i++){
        for(j=0;j<NOC;j++){
            printf("%d", a[i][j]);

        }

        printf("\n");

    }
}
