#include <stdio.h>

int main()
{
	int slice=20;
	int *p=&slice;  

	printf("%d\n", slice);
	printf("%d\n", *p);

	return 0;
}
