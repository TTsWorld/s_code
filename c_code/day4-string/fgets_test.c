#include <stdio.h>

int main()
{
    char buf[10];
    printf("请输入字符串");
    //fgets会读取换行符
    fgets(buf, sizeof(buf), stdin);
    printf("buf = %s", buf);
    return 0;
}

