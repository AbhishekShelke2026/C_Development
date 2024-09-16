#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>



//O_RDONLY  read mode
//O_WRONLY  write mode
//O_RDWR     read and write
int main()
{
    char Name [30];
    int fd = 0;

    printf("enter name of file that you want to open :\n");
    scanf("%s",Name);

    fd = open(Name,O_RDWR);

    if (fd == -1)
    {
        printf("unable to open file\n");
    }
    else
    {
        printf("file gets opened with FD %d\n",fd);
    }

    close(fd);

    return 0;
}