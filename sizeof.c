#include<stdio.h>
int main()
{
    int i = 11;
    char ch = 'A';
    float f = 90.89;
    double d = 908989;

    int Arr [5];
    double Brr [5];
    float Crr [5];
    char Drr [5];

    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(char));
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(double));

    printf("%d\n",sizeof(Arr));
    printf("%d\n",sizeof(Brr));
    printf("%d\n",sizeof(Crr));
    printf("%d\n",sizeof(Drr));



    return 0;
}