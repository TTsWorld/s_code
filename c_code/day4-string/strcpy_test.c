#include <stdio.h>
#include <string.h>

int main()
{
    char a[100] ="hello";
    char b[100];

    strcpy(b, a);//从首元素拷贝到\0,遇到\0就结束
    printf("strcpy the dest str :%s\n", b);

    char a1[100] ="hello \0 world"; 
    char b1[100];

    strcpy(b1, a1);//从首元素拷贝到\0,并且可以拷贝\0,但是\0后面的内容无法拷贝，memcpy可以拷贝所有
    printf("strcpy the dest str :%s\n", b1);

    char b2[100] = "aaaaaaaaaaaaaaaaaaaaaa";
    strncpy(b2, a1, strlen(a));
    printf("strncpy the dest str :%s \n", b2);

    char b4[] = "aaaaxxxxxxxxxxxxxxxxxxxxxxxxxaaaaaaaaaaaaaa";
    char b5[10];
    printf("b5[12]=%c\n", b5[12]);
    strcpy(b5, b4);
    printf("b5=%s\n", b5);

    ///printf("the dest str :%s", b);

}
