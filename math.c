#include<stdio.h>
int Addition(int No1 , int No2);
{
    int Ans = 0;

    Ans = No1 + No2;

    return Ans;


}
int main()
{
    int A = 12;
    int B = 22;
    int Ret = 0;


    Ret = Addition(A,B);

    printf("Addition is : %d\n",Ret);

    return 0;
}s