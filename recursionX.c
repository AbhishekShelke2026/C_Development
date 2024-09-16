#include<stdio.h>

void Display(int no)
{
    static int iCnt = 0;

    if(iCnt < no)
    {
        printf("Jay Ganesh...\n");
        iCnt++;

        Display(no);   //recursive call
    }
}

int main()
{
    Display(11);

    return 0;
}