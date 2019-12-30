#include <stdio.h>

int main()
{


    int a,c;
    //scanf("%d %d", &a,&c );
    //printf("%d %d", a,c );

    char e,f;
    printf("请输入一个字符:");
    e = getchar();
    printf("输入的字符为  %c\n", e);

    printf("请输入一个字符:");
    f = getchar();
    putchar(f);
    printf("输入的字符为  %c\n", f);


    return 0;
}

