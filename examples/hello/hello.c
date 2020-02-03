#include <stdio.h>
#include <linux/kernel.h>
int main()
{
	int *argv = NULL;
	printf("Hello, world!\n");
	argv = (int *)malloc(4);
	if(argv == NULL)
		printf("malloc fail\n");
	return 0;
}
