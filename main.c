#include<stdio.h>

extern int no;

int X = 21;

extern void marvellous();

int main()
{
    printf("value of X is :%d\n",X);
    printf("value of no is :%d\n",no);

    marvellous();


    return 0;
}