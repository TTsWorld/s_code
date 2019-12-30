#include <stdio.h>
#include <string.h>

// 1. struct 内部定义的变量不能直接赋值（因为没有定义变量前没有申请空间
struct Student
{
    int age;
    char name[50];
    int score;
};
int main()
{
    //定义
    struct Student s; //定义一个结构体变量
    //初始化
    struct Student s2 = {18, "mike", 59}; //定义一个结构体变量
    //普通变量
    s.age = 18;
    //字符串
    strcpy(s.name, "mike");//s.name是数组名称，是常量，不能修改.strcpy是将mike拷贝到
    //指针变量
    struct Student *p;
    p = &s;
    p->age = 18;
    strcpy(p->name, "nike");
    p->score = 22;

    return 0;
}

