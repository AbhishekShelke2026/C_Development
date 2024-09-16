#include<stdio.h>
int main()
{
    int Value1 = 0, value2 = 0, Ret = 0;

    printf("enter 1st no.:\n");
    scanf("%d",&Value1);

    printf("enter 2nd no.:\n");
    scanf("%d",&value2);

    Ret = Value1 * value2;

    printf("multiplication is : %d\n",Ret);

    return 0;
}