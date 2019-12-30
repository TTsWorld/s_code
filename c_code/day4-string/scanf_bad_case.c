#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[10] = {0};
    //c = (char*) malloc(1024);
    printf("请输入：");
    scanf("%s \n", c); //默认以空格作为分割符
    printf("c = %s\n", c);
    //scanf("");

//    char tmp[100] = {0};    //输入hello world 上一次打印hello， 第二次scanf打印world，因为存放在缓冲区的数据按照
//    printf("请输入tmp：");  //空格分割，读到第一个空格后就不读取了
//    scanf("%s \n", tmp);
//    printf("c = %s\n", tmp);
//


    //scanf 无法检测数组越界，不安全
    char str[10];
    printf("请输入：");
    scanf("%s \n", str); //默认以空格作为分割符
    printf("c = %s\n", str);



    return 0;
}

