#include <stdio.h>

//二级指针的使用范例

void print_array(char *p[], int size) //二级指针的传递
{
    for (int i=0;i<size;i++)
    {
        printf("%s \n", p[i]);
    }
}
int main()
{

    //下面这种形式申请的内存，字符串内容存储在文字常量区，数组p[i] 的指针指向文字常量区
    char *p[] = {"111", "2223", "333", "444"}; //p[]括号中的大小表示数组的个数，数组内容为char *
    //这种形式申请的内存，字符串内容也是数组，会从文字常量区拷贝到栈内存
    char p2[4][30] = {"111", "2223", "333", "444"}; //p[]括号中的大小表示数组的个数，数组内容为char *

    int size = sizeof(p)/sizeof(p[0]);
   print_array(p, size);
    return 0;
}
