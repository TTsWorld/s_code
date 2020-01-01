#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Stu
{
    char name[40];
    int age;

}Stu;

void testwrite(FILE *fp, Stu t[])
{
    char buf[50];
    for (int i=0;i<3;i++)
    {
        sprintf(buf, "sss%d", i);
        strcpy(t[i].name, buf);
        t[i].age = 20 + i;
    }
    fwrite(t, sizeof(Stu), 3, fp );
}

void testread(FILE *fp, Stu t[], int len)
{
    fread(t, sizeof(Stu), 3, fp);

    for (int i=0;i<len; i++)
    {
        printf("%s, %d", t[i].name, t[i].age);
    }

}

int main()
{

    Stu t[3];

    //FILE *fp = fopen("a.txt", "w+");
    FILE *fp = fopen("a.txt", "r+");
    if (fp == NULL)
    {
        perror("fopen error");
        return -1;
    }
    //testwrite(fp, t);
    testread(fp, t, 3);


    
    if (fp != NULL)
    {
        fclose(fp);
        fp = NULL;
    }

    return 0;
}

