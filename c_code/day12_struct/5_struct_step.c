#include <stdio.h>


//结构体的偏移量
//只要结构体定义结束，结构体的内存布局已经确定
typedef struct Teacher
{
    char name[4]; //4
    int age; //4
    int id; //4
}Teacher;

int main()
{
    printf("Hello world\n");
    return 0;
}

