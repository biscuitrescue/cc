#include <stdio.h>

int main()
{
	int input;
	do
	{
		printf("Please enter a number from 0 to 10: ");
		scanf("%d", &input);

	} while(input<0 || input>10);

	return 0;
}
