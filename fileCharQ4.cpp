//break_the_bond
//jatt_james_bond
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<errno.h>
int main()
{
    int len, fd;
    char str[30];
    fd = open("testFile.txt", O_RDONLY, 0777);
    if (fd == -1)
        perror("Error:");

    lseek(fd, -11, SEEK_END);
    len = read(fd, str, 10);
    write(1, str, len);
    
    return 0;
}
