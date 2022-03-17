#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool isprime(int input)
{
	for(int i=sqrt(input); i>1; i--)
	{
		if(input%i==0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int inp;
	printf("Enter your number: ");
	scanf("%d", &inp);

	for(int i=inp; i>1; i--)
	{
		bool is_prime=isprime(i);

		if(is_prime)
		{
			printf("%d is prime\n", i);
		}
	}

	return 0;
}

/*
int main()
{
	int inp;
	printf("Please enter your number: ");
	scanf("%d", &inp);
	int is_prime=true;
	for(int i=sqrt(inp); i>1; i--)
	{
		if(inp%i==0)
		{
			is_prime=false;
		}
	}
	
	if(is_prime)
	{
		printf("Is a prime number\n");
	} else
	{
		printf("Is not a prime number\n");
	}

	return 0;
}
*/
// PRINT ALL PRIMES FROM NUMBER TO 2
