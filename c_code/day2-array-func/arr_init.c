#include <stdio.h>
#include <string.h>

//字符串初始化
int main()
{

    char a1[] = {'a', 'b', 'c'}; //字符数组
    printf("a1 = %s\n", a1);


    char a2[] = {'a', 'b', 'c', '\0'}; //字符串
    printf("a2 = %s\n", a2);

    char a3[] = {'a', 'b', 'c', 0}; //字符串 \0 和0 等价
    printf("a3 = %s\n", a3);

    char a4[] = {'a', 'b', 'c', '\0'}; //字符数组
    printf("a4 = %s\n", a4);

    char a5[] = {'a', 'b', 'c', 'd', 'e', 'f'}; 
    printf("a5 = %s\n", a5);

    char a6[] = {'a', 'b', 'c', '\0', 'e', 'f'}; 
    printf("a6 = %s\n", a6); //"abc"

    char a7[] = {'a', 'b', 'c', '\0', 'e', 'f'}; 
    printf("a7 = %s\n", a7);

    char a8[10] = {'a', 'b', 'c'};
    printf("a8 = %s\n", a8);

    char a9[10] = "abc";
    printf("a9 = %s\n", a9);
    printf("sizeof(a9) = %d\n", sizeof(a9));
    printf("strlen(a9) = %d\n", strlen(a9)); //strlen 识别空格


    char a10[] = "\0abc";      //什么都不打印
    printf("a10 = %s\n", a10);

    char a11[] = "\012abc"; //012组成\n这个转义字符
    printf("a11 = %s\n", a11);







    return 0;
}

