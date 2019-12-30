#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Stu
{
    int age;
    char name[10];
};

int main()
{
    struct Stu *s;
    s = (struct Stu *)malloc(sizeof(struct Stu));
    if (s == NULL)
    {
        printf("malloc err");
        return -1;
    }
    s->age = 10;
    strcpy(s->name, "mike");

    if (s != NULL)
    {
        free(s);
    }
    printf("Hello world\n");
    return 0;
}

