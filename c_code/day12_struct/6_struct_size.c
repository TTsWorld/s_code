#include <stdio.h>


struct Test0
{
    int aa;
    long bb;
};
struct Test
{
    int a;
    short b;
    double c;
    struct Test0 t;
}t;

/*
a a a a a a * * 
a a a a a a a a 
a a a a 
a a a a a a a a 
*/


int main()
{
    printf("%d\n", sizeof(t));
    return 0;
}

