#include <stdio.h>
#include <string.h>

int main()
{
    //字符串切割 strtok
    //1:该函数会破坏原有字符串
    //2:第一次切割时首参为待切割字符串，第二次切割为NULL
    

    char str[] = "abc, def, ghi, jkl, mni";
    char tmp[sizeof(str)];

    strcpy(tmp, str);

    char *p = strtok(tmp, ",");
    while ( p != NULL )
    {
        printf("%s", p);
        p = strtok(NULL, ",");
    }
    return 0;
}

