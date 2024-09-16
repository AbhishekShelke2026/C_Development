#include<stdio.h>

struct Marvellous
{
    int no;
    float f;
    int i;
};

int main()
{
    struct Marvellous mobj;

    struct Marvellous *ptr = &mobj;

    ptr -> no = 11;
    ptr -> f = 90.89;
    ptr -> i = 21;

    printf("%d\n",ptr ->no);
    printf("%d\n",mobj.no);

    printf("size is:%d\n",sizeof(mobj));


    return 0;
}