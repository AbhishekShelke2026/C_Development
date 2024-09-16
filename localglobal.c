#include<stdio.h>

int X = 101;

void Marvellous()
{
    int i = 21;
    int No = 51;

    printf("from Marvellous value of No is :%d\n",No);
    printf("from Marvellous value of i is :%d\n",i);
    printf("from Marvellous value of X is :%d\n",X);

}

int main()
{
    int No = 11;

    printf("from main value of No is :%d\n",No);
    printf("from main value of X is :%d\n",X);

    Marvellous();


    return 0;
}