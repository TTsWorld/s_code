#include <stdio.h>
#include <iostream>

using namespace  std;
int main()
{
    int a[] = {4,1,5,7,7,23,657,2,6,2,7};

    int n = sizeof(a)/sizeof(int);
    int i = 0;
    int j = 0;
    int tmp;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
        cout << "第一次结束:" ;
        for(j=0;j<n;j++)
        {
            cout << a[j] << ",";
        }
        cout << endl;
    }
    for(i=0;i<n;i++)
    {
        printf("%d,", a[i]);

    }


    return 0;
}

