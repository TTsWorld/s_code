#include <stdio.h>

int main()
{

    FILE *fp = fopen("a.txt", "r");
    int a ;
    a = getc(fp);
    printf("%d\n", a);
    printf("%c\n", a);
    a = getc(fp);
    printf("%d\n", a);
    printf("%c\n", a);
    a = getc(fp);
    printf("%d\n", a);
    printf("%c\n", a);

    char ch;
    while(1)
    {
        if (ch == EOF) // EOF =-1 但是如果是二进制文件，无法用EOF判断结尾，因为遇到可能存在-1
        {
            break;
        }
        ch = getc(fp);
        printf("%c", ch);
    }

    return 0;
}

