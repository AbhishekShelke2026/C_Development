#include<stdio.h>
int main()
{

    int standard = 0;

    printf("enter your standard\n");
    scanf("%d",&standard);

    if(standard == 1)
    {
        printf("your exam is at 7am\n");
    }
    else if (standard == 2)
    {
        printf("your exam is at 8am\n");
    }
    else if (standard == 3)
    {
        printf("your exam is at 9am\n");
    }
    else if (standard == 4)
    {
        printf("your exam is at 10am\n"); 
    }
    else
    {
        printf("wrong standard\n ");
    }

    return 0;
}