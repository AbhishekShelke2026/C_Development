#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Name [30];
    int fd = 0;

    printf("enter name of file that you want to delet :\n");
    scanf("%s",Name);

    unlink(Name);

    

    return 0;
}