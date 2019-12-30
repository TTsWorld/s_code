#include <stdio.h>
#include <stdlib.h>

int main()
{

    //"w" 文件不存在则新建,存在直接从0开始写
    //"r" 文件不存在，打开失败
    //"a" 文件不存在，新建，如果文件存在，光标自动放到文件末尾
    FILE *fp = fopen("a.txt", "w");
    if (fp == NULL)
    {
        perror("fopen error");
        exit(-1);
    }
    char *p1 = "b.txt"; //在字符串常量区(字符串和数组的区别)
    fopen(p1, "w+");

    char p2[] = "c.txt"; //数组形式的字符串存储在栈内存
    fopen(p2, "w");

    return 0;
}

