#include <stdio.h>
#include <string.h>

int main()
{

    char str[20] = "hello world";
    char c = 'e';
    char *p = strchr(str, c);
    if (p == NULL)
    {
        printf("not found");
    }else
    {
        printf("the address of c %c", *p);
    }

    char *p1 = strstr("hello world", "abc");
    if ( p1 == NULL )
    {
        printf("not found");
    }else
    {
        printf("the address is %c", *p1);
    }


    return 0;
}

