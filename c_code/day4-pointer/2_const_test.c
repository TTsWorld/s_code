#include <stdio.h>

int main()
{
    int a ;

    int *p = NULL;
    p = &a;


    const int *p1 = p;
    //const修饰的是*p，表示指针指向的内存只读
    *p1 = 200; //err

    int * const p2 = p;
    //const修饰 p2，表示指针变量为只读
    p2 = 200; //err

    printf("Hello world\n");
    return 0;
}

