#include<stdio.h>
#pragma pack(1)
struct Student
{
    int RollNo;   
    char Division;
    int Age;
    float Marks;
    int Salary;

};

int main()
{
    struct Student  Abhishek;
   

    printf("size of object is : %d\n",sizeof(Abhishek));


    

    return 0;
}