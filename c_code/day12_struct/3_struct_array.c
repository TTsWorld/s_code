#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Teacher
{
    char *name;
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
        t3[i].name = (char *)malloc(30);
        strcpy(t3[i].name, buf);
        t3[i].age = i + 20;
    }
    for (int i=0;i<3;i++)
    {
        printf("%s, ", t3[i].name);
        printf("%d\n", t3[i].age);
    }

    for (int i=0;i<3;i++)
    {
        if (t3[i].name != NULL)
        {
            free(t3[i].name);
            t3[i].name = NULL;
        }
    }
    if (t3!=NULL)
    {
        free(t3);
    }

    return 0;
}

