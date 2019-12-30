#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//指针作为函数参数传递的测试
//


void func( char **p, int *len )
{

    char *tmp = NULL;

    tmp = (char *) malloc(sizeof("abcedf"));
    strcpy(tmp, "abcedf"); // 字符串赋值切忌不要用 =  c语言的漏洞
    *p = tmp;
    free(tmp);
    if (tmp != NULL)
    {
        free(tmp);
    }
}

int main()
{
    char *p = NULL;
    int len = 0;
    func(&p, &len);

    printf("%s\n", p);
    return 0;
}

