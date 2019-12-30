#include <stdio.h>
#include <stdlib.h>

//验证栈内存的生长方向
int main()
{


    char str[] = "hell";
    char str1[] = "hell";
    char str2[] = "hell";
    char str3[] = "hell";
    printf("%p\n", &str);
    printf("%p\n", &str1);
    printf("%p\n", &str2);
    printf("%p\n", &str3);
    printf("=======\n");

    int a;
    int b;
    int c;
    printf("%d\n", &a);
    printf("%d\n", &b);
    printf("%d\n", &c);

    char *d;
    char *f;

    d = (char *)malloc(sizeof(char)*4);
    f = (char *)malloc(sizeof(char)*4);
    printf("%p\n", &d);
    printf("%p\n", &f);

    return 0;
}

