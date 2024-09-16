#include<stdio.h>
#pragma pack(1)
struct Demo
{
    int no;
    float f;
    int data;
    char ch;

};
union Hello
{
    int no;
    float f;
    int data;
    char ch;

};


int main()
{
    struct Demo dobj;
    union Hello hobj;

    printf("size of structure is :%d\n",sizeof(dobj));
    printf("size of union is :%d\n",sizeof(hobj));

    hobj.no = 11;
    printf("%d\n",hobj.no);

    hobj.no = 21;
    printf("%d\n",hobj.no);
    printf("%d\n",hobj.data);


    return 0;
}