#include<stdio.h>

void Marvellous()
{
    static int X =10;
    X++;

    printf("value of X is %d\n",X);

}
int main()
{
    printf("demonstration of static storage class...\n");

    Marvellous();
    Marvellous();
    Marvellous();
    Marvellous();

    return 0;
}