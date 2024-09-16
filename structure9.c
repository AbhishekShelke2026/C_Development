#include<stdio.h>

struct Demo
{
    int No;
    int data;
};

int main()
{
    struct Demo obj;

    struct Demo *ptr = &obj;

    obj.No = 11;

    ptr -> Data = 21;

    return 0;
}