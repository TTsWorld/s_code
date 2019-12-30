#include <stdio.h>
#include <string.h>

int main()
{

    char buf[] = "abcefdfadfdsa";
    for (int i=0;i<strlen(buf); i++)
    {
        printf("%c\n", buf[i]);
    }

    printf("=============");
    for(int i=0;i<strlen(buf);i++)
    {

        printf("%c\n", *(buf + i));
    }
    printf("Hello world\n");
    return 0;
}

