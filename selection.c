#include<stdio.h>
int main()
{
    int A = 0;
    int Ans = 0;

    printf("enter the no.\n");
    scanf("%d",&A);

    Ans = A % 2;

    if(Ans == 0)
    {
        printf("number is even\n");
    }

    else
    {
        printf("number is oddd\n");
    }

    return 0;


}