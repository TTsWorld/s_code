#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//结构体中嵌套指针，并且动态分配空间
//在同类型结构体变量赋值的时候，不同结构体成员指针变量指向同一块内存

typedef struct Teacher
{
    char *name;
    int age;
}Teacher;

int main()
{
    Teacher t1;
    t1.name = (char *)malloc(30);
    strcpy(t1.name, "lily");
    t1.age = 22;

    Teacher t2;
    t2 = t1; //默认是浅拷贝的
    printf("[t2] %s, %d\n", t2.name, t2.age);
//
//    if(t1.name != NULL)
//    {
//        free(t1.name);
//        t1.name = NULL;
//    }
    printf("[t2] %s, %d\n", t2.name, t2.age); //t2和t1指向同一块name变量的内存，所以free完后被释放



    //深拷贝
    Teacher t3;
    t3.name = (char *)malloc(30);
    strcpy(t3.name, "lily");
    t3.age = 22;

    Teacher t4;
    t4 = t3;
    t4.name = (char *)malloc(30);
    strcpy(t4.name, t3.name);

     if(t3.name != NULL)
     {
         free(t1.name);
         t3.name = NULL;
     }
 
    printf("[t4] %s, %d\n", t4.name, t4.age); //t2和t1指向同一块name变量的内存，所以free完后被释放

    return 0;
}

