#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int *p;
    
    p = (int *)malloc(sizeof(int));

    *p = 10;
    printf("%d\n", *p);
    return 0;
}

