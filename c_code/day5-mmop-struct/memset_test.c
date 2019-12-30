#include <stdio.h>
#include <string.h>

int main()
{
    int a;
    memset(&a, 0, sizeof(int));
    printf("%d", a);


    char b[] = "hello\0mike";
    char buf[sizeof(b)];

    strcpy(buf, b);
    strncpy(buf, b, sizeof(b));
    printf("%s\n", buf);

    memset(buf, 0, sizeof(buf));
    memcpy(buf, b, sizeof(b));
    printf("%s", buf + strlen(buf) + 1);

    

    return 0;
}

