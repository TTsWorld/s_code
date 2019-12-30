#include <stdio.h>

void print_array(int a[120])
{
    printf("%d\n", sizeof(a));  //8
    printf("%d\n", sizeof(int));// 4

    printf("%p\n", a); 
    printf("%p\n", &a[0]); //同上一行
    printf("%d\n", sizeof(char *)); //8
}
int main()
{
    int arr[] = {1, 2, 3};
    printf("%d\n", sizeof(arr)); //12
    print_array(arr);
    return 0;
}

