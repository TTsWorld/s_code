#include <stdio.h>
#include <string.h>
#include <ctype.h>

void func(char *p, int *len)
{

    if (p==NULL)
    {
        return ;
    }

    int begin = 0;
    int end = strlen(p) -1;

    while(isspace(p[begin]) && p[begin] !=0)
    {
       begin++; 
    }
    while(isspace(*(p+end)) && p[end] != 0)
    {
       printf("%c\n", *(p+end));
       end--; 
    }

    *len = end - begin + 1;
 
}

// 两头堵模型，计算一个字符串中非空字符的个数  "     fdsafdsfda            "
int main()
{

    char *p = "       dsaf     ";
    int len;

    func(p, &len);
    printf("%d\n", len);


    return 0;
}

