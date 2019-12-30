#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void GetMemory(char **p, int num)
{
	*p = (char *)malloc(num);
}
int main()
{
	char *str = NULL;
	GetMemory(&str, 100);
	strcpy(str, "hello");
	free(str);
	if (str != NULL)
	{
		strcpy(str, "world");
	}
	printf("\n str is %s", str);
	getchar();
}

