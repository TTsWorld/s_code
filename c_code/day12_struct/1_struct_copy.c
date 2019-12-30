#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//结构体只是一个类型，不要给结构体赋值
struct Teacher
{
    char name[40];
    int age;
};

void copyTeacher( struct Teacher *to, struct Teacher *from)
{
    *to = *from;

}
int main()
{

    struct Teacher t1 = {"lily", 12};
    //相同类型的两个结构体变量，可以互相赋值
    //赋值过程中，把t1成员变量的值拷贝给t2对应的成员变量。
    struct Teacher t2 = t1;;

    struct Teacher t3;
    memset(&t3, 0, sizeof(t3));
    copyTeacher(&t3, &t1);

    printf("%s %d\n", t3.name, t3.age);
    return 0;
}

