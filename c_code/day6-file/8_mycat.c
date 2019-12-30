#include <stdio.h>

int main(int argc, char *argv[])
{


    FILE *fp = fopen(argv[1], "r");

    char ch;
    while(1)
    {
        ch = getc(fp);
        if (feof(fp))
        {
            break;
        }
        printf("%c", ch);
    }

    fclose(fp);
    fp = NULL;


    return 0;
}

