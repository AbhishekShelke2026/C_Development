#include<stdio.h>

int main(int argc , char *argv[])
{
    int i = 0;

    printf("no of command line are  %d\n",argc);

    for(i = 0; i < argc; i++)
    {
        printf("%s\n",argv[i]);
    }

    return 0;
}


// gcc command.c -o myexe

// myexe.exe ppa Marvellous 11 lb 21