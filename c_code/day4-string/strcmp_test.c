#include <stdio.h>
#include <string.h>

int main()
{


    //strcmp是按照每个字符的ASCII码进行比较的，只要有其中一个ascii能比较出大小，就直接返回比较结果

    char s1[] = "abc";
    char s2[] = "abcd";


    printf("strcmp : %s\n", strcmp(s1,s2) > 0  ? ">":"<");
    printf("strncmp : %d\n", strncmp(s1,s2, 3));


    char s3[] = "abc";
    char s4[] = "Abcd";
    printf("strcmp : %s\n", strcmp(s3,s4) > 0  ? ">":"<");
    printf("strncmp : %d", strncmp(s3,s4, 3));

    //printf("Hello world\n");
    return 0;
}

