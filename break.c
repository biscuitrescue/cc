#include <stdio.h>

int main()
{
	for(int i=0; i<10; i++)
	{
		printf("%d", i);
		if(i==7)
		{
			break;
		}
	}

	return 0;
}
