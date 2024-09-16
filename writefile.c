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
    int iRet = 0;
    char Data[] ="Marvelloyus Infosystem";


    printf("enter name of file that you want to open :\n");
    scanf("%s",Name);

    fd = open(Name,O_RDWR);

    iRet = write(fd,Data,22);
    
    printf("%d bytes gets written successfully into file \n",iRet);

    close(fd);

    return 0;
}