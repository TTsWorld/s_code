#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    
    //编译器根据种子数计算随机值，如果设置固定值，则每次运行程序获得的种子数都一样
    //srand(100);
    srand(time(NULL));
    
    int num;
    int i = 0;
    for (i=0;i<10;i++)
    {
        num = rand();
        printf("num = %d \n", num);
    }


    return 0;
}

