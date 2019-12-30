#include <stdio.h>
#include <stdlib.h>

int *func()
{
    int *tmp = (int *)malloc(sizeof(int));
    int b = 10;
    tmp = &b;
    *tmp = 10;
    return tmp;
}



int main()
{
    int *p = NULL;
    p = func();
    printf("%d", *p);
    if (p!=NULL)
    {
        free(p);
        p = NULL;
    }
    printf("Hello world\n");
    return 0;
}

