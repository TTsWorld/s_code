#include <stdio.h>

//二维指针作为数组参数的差异

void print_array(char **arr, int len)
{
    for (int i=0;i<len;i++)
    {
        printf("%s\n", arr);
    }

}
void print_array2(char arr[][4], int len)
{
    for (int i=0;i<len;i++)
    {
        printf("%s\n", arr);
    }

}

int main()
{


    char a[][4] = {"aaa", "bbb", "ccc"};

    int n = sizeof(a)/sizeof(a[0]);
    print_array(a, n);
    print_array2(a, n);

    printf("Hello world\n");
    return 0;
}

