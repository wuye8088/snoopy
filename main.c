#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stddef.h>

int Func(int x, int y)
{
	int ret;
	ret = x + y;

	return ret;
}
	
int main()
{
	// printf("hello, world.\n");
	int ret;

	ret = Func(12, 32);

	printf("hello, this is the result:%d\n", ret);

	return ret;
}
