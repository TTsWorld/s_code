#include <stdio.h>

int main()
{
    char a = 'a';
    char b = 97;
    char c = 10000000000000000; //越界
    printf("char a = 'a' %c\n", a);
    printf("char b = 97  %c\n", b);
    printf("char c = 10000000 %c\n", c);
    return 0;
}

