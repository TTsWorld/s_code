#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *fp = fopen("hw1.txt", "w");
    srand(time(NULL));
    int r;
    for(int i=0;i<500;i++)
    {
        r = rand() % 100;
        printf("%d\n", r);
        printf("=========");
        fputc(r, fp);
        fputc('\n', fp);
    }
    return 0;
}

