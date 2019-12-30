#include <stdio.h>

int main()
{
    char *a[] = {"abafdsaf", "bbb"};



    // a表示的是第一个元素的首地址
    // &a 表示的是整个数组的首地址。
    // *(a+1)
    // &a +  1


    printf("%s\n", *(a));
    printf("%s\n", *(a+1));


    printf("%p\n", &a[1]);
    printf("%p\n", &a);
    return 0;
}

