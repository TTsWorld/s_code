#include <stdio.h>
#include <unistd.h>

int main()
{
    FILE *fp = fopen("7.txt", "r");

    char ch ;
    while(1)
    {
        printf("文件还未结尾\n");
        //ch = getc(fp);
        if (feof(fp)) // feof 必须要先读取后才能进行判断，如果不读取，则一直为假,
        {
            printf("文件到结尾了");
            break;
        }
    }
    
    fclose(fp);
    fp = NULL;


    printf("Hello world\n");
    return 0;
}

