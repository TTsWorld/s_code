#include <stdio.h>
#include <string.h>

int main()
{
    char a[] = "123";
    char b[] = "012345";
    strcpy(a, b);
    printf("%s\n", a);
    return 0;
}

