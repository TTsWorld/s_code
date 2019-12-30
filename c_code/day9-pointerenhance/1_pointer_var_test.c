#include <stdio.h>

//指针变量的易错点
int main()
{
    //指针变量和指针指向的内存没有关系
    //互相改变没有影响
    char buf[] = "hello world";
    char *p = buf;
    *(p+1) = 'l';
    printf(" %s\n", p+1);
    printf(" %p\n", p);
    printf(" %p\n", p+1);

    char *buf2 = "hello";
    buf2[2] = 'x'; //文字常量区，不可改, segment fault
    return 0;
}

