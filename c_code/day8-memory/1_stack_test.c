#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char* get_str()
{
    char *str = "hello world";  //这里申请的是一个指针, 指向字符串的第一个字符地址
    return str;
}

char* get_str2()
{
    char str[] = "hello world"; //这里申请的是一个临时变量，字符串由全局数据区拷贝到了栈区，函数结束后会释放。
    return str;
}

char* get_str3()
{
    char *str = (char *)malloc(sizeof(char) * 4);
    strcpy(str, "hello world");
    return str;
}
int main()
{
    char buf[1024];
    char *p = NULL;

    p = get_str3();
    printf("%s\n", p);

    if (p != NULL) //使用完函数返回的指针，一定要释放引用
    {
        free(p);
        p = NULL;
    }
    return 0;
}

