#include <stdio.h>


//gets已经弃用了 ,不做越界检查
int main()
{
    char buf[10];

    printf("gets测试，请输入一个字符串:");
    gets(buf);
    printf("buf=%s", buf);
    printf("Hello world\n");
    return 0;
}

