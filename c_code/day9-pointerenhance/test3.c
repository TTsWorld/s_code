#include <stdio.h>

int func()
{
    int a = 3;  
    return a;
}

int *func2() //err
{
    int a = 10;
    return &a; //core dump //segment fault ;返回的值在函数执行完毕后被释放，不能使用
}
int *func3()
{
    static int a = 10; //static申请的内存，当程序执行结束后才释放，所以可以由外部使用
    return &a;
}

int main()
{
    int b = func(); //这一行之所以能成功是由于返回的是一个值，在函数调用过程结束后，能保证将值拷贝过去
    int *c = func2(); // segment fault 这一行之所以失败，是由于函数调用完后，地址指向的空间不一定能使用
    int *d = func3(); // 

    printf("%d\n", b);
    printf("%d\n", *c);
    printf("%d\n", *d);
    return 0;
}

