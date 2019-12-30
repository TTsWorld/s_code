#include <stdio.h>

int main()
{
    char buf[] = "helllo";
    //输入打印的字符后,自动添加一个换行，但是不会改变原有字符串
    puts(buf);
    printf("Hello world\n");
    return 0;
}

