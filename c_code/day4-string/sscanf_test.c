#include <stdio.h>

int main()
{
    int a,b,c;
    a = 0;
    b = 0;
    c = 0;
    char buf[1024] = "1 2 3";
    sscanf(buf, "%d %d %d", &a, &b, &c);
    printf("a=%d, b=%d, c=%d", a,b,c);
}

