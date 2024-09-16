#include<stdio.h> 

int multiplication(int No1 , int No2)
{
    int Ans = 0;
    Ans = No1 * No2;
    return Ans;
}
int main()
{
    int Value1 = 0, value2 = 0, Ret = 0;

    int (*fptr)(int , int);

    fptr = multiplication ;

    printf("enter 1st no.:\n");  
    scanf("%d",&Value1);

    printf("enter 2nd no.:\n");
    scanf("%d",&value2);

    Ret = fptr(Value1 , value2);

    printf("multiplication is : %d\n",Ret);

    return 0;
}