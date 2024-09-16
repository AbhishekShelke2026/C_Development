#include<stdio.h>
int main()
{
    int No = 10;

    printf("value of No : %d\n",No);

    printf("Address of No : %lu\n",&No);

    printf("Size of No : %d\n",sizeof(No));

    No++;

    printf("value of No : %d\n",No);

    No--;

    printf("value of No : %d\n",No);

    return 0;
}