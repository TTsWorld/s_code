#include <stdio.h>

int main()
{
    void* p;

    int a = 0;
    p = &a;
    *(int *)p = 200;  //在使用前要先转换为指定的类型
    return 0;
}

