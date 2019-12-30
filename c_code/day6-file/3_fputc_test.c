#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    
    FILE *fp = fopen("a.txt", "w+");
    if (fp==NULL)
    {
        perror("fopen error");
        exit(-1);
    }

    fputc('a', fp);
    fputc('b', fp);
    fputc('c', fp);
    fputc('d', fp);

    char ch = 'a';
    while (ch < 'z')
    {
        putc(ch, fp);
        ch++;

    }

    fclose(fp);
    fp = NULL;
    return 0;
}

