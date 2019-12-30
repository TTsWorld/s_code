#include <stdio.h>

int main()
{
    int arr1[] = {1,2,3};
    int arr2[] = {};
    int arr3[10];
    //int arr4[] = new int[];


    printf("the address of arrname: %p\n", &arr1);
    printf("the address of arr[1]: %p\n", &arr1[0]);

    printf("sizeof(a) = %lu\n", sizeof(arr1));
    return 0;
}

