#include <stdio.h>

//字符串拷贝

//尽量不要操作形参
//使用指针钱要验证是否为NULL
int mystrcpy(char *dst, char *src)
{
    if (dst == NULL or src == NULL)
    {
        return -1;
    }
    int i=0;
    while(*dst++ = *src++){
        NULL;
    }

}

int main()
{
    char buf[] = "abcefafdafdsa";
    char dst[100];
    
    mystrcpy(dst, buf);
    printf("%s", dst);


    printf("Hello world\n");
    return 0;
}

