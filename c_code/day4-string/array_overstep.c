#include <stdio.h>
#include <string.h>

int main()
{
    char a[] = "aaaaaaaaaaaaaaaaaaaa";
    char b[10];
    strcpy(b, a); //数组越界
    printf("Hello world\n");
    return 0;
}

