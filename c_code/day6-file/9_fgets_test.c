#include <stdio.h>


int main()
{
    char buf[1024];

    while(1)
    {
        fgets(buf, 1024,  stdin);
        printf(buf);
    }
    return 0;
}

