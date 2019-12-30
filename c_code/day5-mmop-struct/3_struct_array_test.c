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
    struct Student s[10]; //定义一个结构体变量

    //1，通过结构体数组逐个初始化
    s[0] = {18, "mike", 50};
    s[1].age = 18;
    strcpy(s[1].name, "nike");
    s[1].score = 60;

    //2. 通过指针初始化
    (s+2)->age = 10;
    strcpy((s+2)->name,  "mike");
    (s+2)->score = 80;

    //3. 通过指针初始化
    (*(s+3)).age = 20;
    strcpy((*(s+3)).name, "mike");
    (*(s+3)).score = 100;



    return 0;
}

