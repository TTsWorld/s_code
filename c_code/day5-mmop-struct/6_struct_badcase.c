#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stu
{
    int age;
    char *score ;
};
int main()
{
    struct Stu *s;
    //在堆内存上申请空间存放结构体变量
    s = (struct  Stu *)malloc(sizeof(struct Stu));
    if (s == NULL)
    {
        printf("malloc error");
        exit(-1);
    }
    //这里必须要给结构体内的字符串变量申请内存
    //因为上面一行给结构体申请内存的时候，不会给char *score申请（因为不知道多长)
    s->score = (char *) malloc(strlen("hello world") + 1);
    if (s->score == NULL)
    {
        printf("malloc error");
    }
    //上一行 strlen + 1的原因是字符串后面的\1 strlen不计算在内，所以要手动+1
    s->age = 10;
    strcpy (s->score, "hello world");

    printf("%d, %s", s->age, s->score);
    //要养成用完就释放的好习惯
    if ( s->score != NULL ) //要先释放子节点
    {
        free(s->score);
    }
    if ( s != NULL )
    {
        free(s);
    }

    return 0;
}

