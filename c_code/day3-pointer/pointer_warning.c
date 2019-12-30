#include <stdio.h>

int main()
{

    int a;
    int* p;

//   p=111; //指针在没有初始化的时候不能赋值

    p = &a;

//    p = 111; //只有指针类型才能赋值给指针


    int * p1; 
//    *p1 = &a; //赋值类型要匹配 *p1 应当为p1 


    printf("Hello world\n");
    return 0;
}

