#include <stdio.h>

//指针数组
void test1()
{
    char *a[] = {"aaa", "bbb", "ccc"};

}

//数组指针:指向一个数组的指针,指向一维数组整个数组，而不是首元素的地址
void test2()
{
    //1. 先定义数组，在定义指针
    int a[10];
    typedef int(*p)[] = &a;
    for (int i=0;i<10;i++)
    {
        (*p)[i] = 2*i +1;
    }
    for (int i=0;i<10;i++)
    {
        printf("%d\n", (*p)[i]);
    }
}


int main()
{
    printf("Hello world\n");
    return 0;
}

