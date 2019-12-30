#include <stdio.h>
#include <stdlib.h>


void func(int *tmp)
{
    tmp = (int *)malloc(sizeof(int));
    *tmp = 100;
}

//值传递的测试
int main()
{

    int *p = NULL;

    func(p); // p的值是空, 所以调用函数的效果实际上是 int *tmp = NULL;一个新变量
    printf("%d", *p);
    return 0;
}

