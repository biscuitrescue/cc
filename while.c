#include <stdio.h>

int main()
{
	int i=0;
	while(i<10)
	{
		i++;
		printf("%d ",i);
		/* i++; */
	}

	printf("\n");

	for(int k=0; k<10; k++)
	{
		printf("%d ",k+1);
	}
	
	printf("\n");

	return 0;
}
