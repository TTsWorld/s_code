#include <stdio.h>
#include <string.h>

union Test
{
    unsigned char ch;
    unsigned int i;
    unsigned int c;
    double d;

};

int main()
{

    //结构体的大小是各成员按照结构体规则对齐后相加
    //共用体大小是最大成员的大小
    printf("%lu\n", sizeof(union Test));
    //共用体共用一块内存空间
    union Test obj;
    printf("%p, %p, %p, %p", &obj.ch, &obj.i, &obj.c, &obj.d);
    return 0;
}

