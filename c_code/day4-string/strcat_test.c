#include <stdio.h>
#include <string.h>

int main()
{

    char c[100] = "abcd";
    char b[] = " hello efg";


    strcat(c, b);
    
    printf("the dest str: %s\n", c);
    return 0;
}

