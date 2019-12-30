#include <stdio.h>
#include <string.h>

struct Student
{
    int age;
    char score[10];
};
int main()
{
    struct Student s;
    s.age = 10;
    strcpy(s.score, "mike");

    struct Student s2;
    s2 = s;  //赋值完成后，两个值是独立的，c/c++里均为值传递,赋值时直接拷贝内容到新内存
    printf("%d, %s", s2.age, s2.score);
    return 0;
}

