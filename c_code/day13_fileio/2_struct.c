#include <stdio.h>

typedef struct A
{
    int a;
    long b;
}A;

struct B{
    int c;
    A a; //ok
    A *a2;// ok
    //B b; // not ok   不能定义的原因是B还未定义，不能确定内存大小，无法分配空间
    B *b2; // ok， 这里可以定义的原因是 因为b2仅仅是个指针，内存大小由操作系统决定，可以确定。
}B;
int main()
{
    printf("Hello world\n");
    return 0;
}

