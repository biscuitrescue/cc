#include <stdio.h>

int main()
{
	int x;
	int y;
	printf("Enter first number: ");
	scanf("%i", &x);
	printf("Enter first number: ");
	scanf("%i", &y);
	int temp=y;
	y=x;
	x=temp;
	printf("%i, %i\n", x,y);
	

	/* int x=4; */
	/* int y=7; */
	/* int temp=y; */
	/* y=x; */
	/* x=temp; */
	/* printf("%i, %i\n", x,y); */

	return 0;
}
