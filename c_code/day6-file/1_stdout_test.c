#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{

    printf("hello world\n");
    close(1);
    int fd = open("./a.txt", O_WRONLY, 777); //该文件得提前建好
    printf("%d", fd);
    if (fd <0)
    {
        perror("open err");
    }

    printf("afger hello world");
    printf("afger hello world");
    printf("afger hello world");
    printf("afger hello world");
    
    
    return 0;
}

