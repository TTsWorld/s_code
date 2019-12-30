#include <stdio.h>

int main()
{
    printf("%d\n", 0x8000007b);
    printf("%u\n", 0x8000007b);


    signed int a = -10;
    unsigned int b = -10;
    printf("unsigned int a=-10 -->%d\n", a);
    printf("unsigned int b=-10 -->%d\n", b);
    printf("unsigned int b=-10 -->%u\n", b); //打印的时候，直接取变量所在的值按照格式化字符%u进行直接解释打印
    return 0;
}

