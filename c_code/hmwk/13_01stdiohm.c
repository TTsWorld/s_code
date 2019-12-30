#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//作业要求：
//   将以下结构体变量，以二进制的形式存放到文件中，并且可以实现读的接口，打印读出的信息
typedef struct Student
{
    char *name;
    int id;
    int name_len;
}Stu;

int main()
{
    Stu s;
    s.id = 1;
    s.name_len = strlen("mike");
    s.name = (char *) malloc(s.name_len +1);

    FILE *fp = fopen("13_hm.txt", "w");

    fwrite

    return 0;
}

