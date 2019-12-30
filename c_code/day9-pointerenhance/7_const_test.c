#include <stdio.h>

int main()
{
    const int a = 10;
    int *b = &a;
    *b = 20;
    printf("%d %d\n", a, *b);
    return 0;

}

