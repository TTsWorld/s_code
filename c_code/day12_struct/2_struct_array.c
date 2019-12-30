#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Teacher
{
    char name[40];
    int age;
}Teacher;
//结构体类型数组
int main()
{

    Teacher *t3 = (Teacher *)malloc(sizeof(Teacher) * 3);

    char buf[50];
    for (int i=0;i<3;i++)
    {
        sprintf(buf, "name%d%d%d", i, i, i);
        strcpy(t3[i].name, buf);
        t3[i].age = i + 20;
    }
    for (int i=0;i<3;i++)
    {
        printf("%s", t3[i].name);
    }

    return 0;
}

