#include <stdio.h>

//二维数组
int main()
{
    int a[3][4] = {
        {1,2,3, 4},
        {1,2,3, 4},
        {1,2,3, 4},
    };

    printf("a:%d a+1:%d\n", a, a+1); //第0行起始地址，第一行起始地址
    printf("%d %d\n", *(a+0), *(a+1));//第0行其实地址，第一行起始地址


    //测试一维数组长度，sizeof()首行首元素的地址
    int t[10];
    printf("t:%d &t:%d\n", sizeof(a), sizeof(&a)); 


    int t2[2][10];
    printf("t2:%d &t2:%d\n", sizeof(t2[0]), sizeof(&t2)); 
    printf("t2:%d &t2:%d\n", sizeof(*(t2+0)), sizeof(t2+0)); 



    return 0;
}

