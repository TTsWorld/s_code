#include <stdio.h>

int main()
{

    int a = 5;
    char b = 'c';
    char buf[] = "hello";

    //格式化一个字符串并输出到屏幕
    printf("a = %d, b=%c, buf=%s \n", a, b, buf);
    char dest[100];
    //格式化一个字符串并输出到一个指定的数组
    sprintf(dest, "a = %d, b=%c, buf=%s \n", a, b, buf);
    printf("%s", buf);

    return 0;
}

