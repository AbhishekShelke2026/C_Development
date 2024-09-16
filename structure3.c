#include<stdio.h>

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
    struct Student  Aishwarya;

    printf("size of object is : %d\n",sizeof(Abhishek));

    Abhishek.RollNo  = 11;
    Abhishek.Division = 'A';
    Abhishek.Marks = 90.89;
    Abhishek.Age = 20;
    Abhishek.Salary = 50000;

    Aishwarya.RollNo = 21;
    Aishwarya.Division = 'B';
    Aishwarya.Salary = 60000;
    Aishwarya.Age = 22;
    Aishwarya.Marks = 91.65;

    printf("Dvision Abhishek is : %c\n",Abhishek.Division);
    printf("Age of Aishwarys is : %d\n",Aishwarya.Age);

    printf("Salary of Abhi is :%d\n",Abhishek.Salary);
    printf("Salary of Aish is :%d\n",Aishwarya.Salary);

    

    return 0;
}