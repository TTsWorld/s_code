#include <stdio.h>
#include <string.h>

//查找子串在字符串中出现的个数
void my_strstrcnt(char *p, int *cnt, const char *substr)
{
    if (p == NULL)
    {
        return; 
    }
    while(*p !=0)
    {
        p = strstr(p, substr);
        if (p != NULL)
        {
            (*cnt)++;
            p = p + strlen(substr);
        }else{
            break;
        }
    }

}

int main()
{
    char buf[] = "abdfalikefdaflikefdalikeA";

    int cnt = 0;
    const char * substr = "like";
    my_strstrcnt(buf, &cnt, substr);

    printf("%d\n", cnt);
    return 0;
}

