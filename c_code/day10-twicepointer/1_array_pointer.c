#include <stdio.h>

//二级指针的使用范例
int main()
{

    char *p[] = {"111", "2223", "333", "444"}; //p[]括号中的大小表示数组的个数，数组内容为char *

    int size = sizeof(p)/sizeof(p[0]);
    for (int i=0;i<size;i++)
    {
        printf("%s \n", p[i]);
    }
    return 0;
}

