#include <stdio.h>
#include <stdlib.h>



//预处理  gcc -E hello.c -o hello.i
//只预处理和编译    gcc -S hello.i -o hello.s
//只预处理，编译和汇编    gcc -c hello.s -o hello.o
//链接    gcc  hello.o  hello
int main()
{
    printf("Hello world\n");
    system("ls -al");
    printf("Hello world\n");
    return 0;
}

