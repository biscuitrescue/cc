#include <stdio.h>


void factorialx(int x)
{
    long int y=1;
    for(int i=x; i>1; i--)
    {
        y*=i;
    }

    printf("%ld\n", y);
}


/*int main()
{
    int num;
    printf("Please enter your number: ");
    scanf("%d", &num);
    factorial(num);

    return 0;
}
*/

int factorial(int x)
{
    long int y=1;
    for(int i=x; i>1; i--)
    {
        y*=i;
    }

    return y;
}

int main()
{
    int num;
    printf("Please enter your number: ");
    scanf("%d", &num);
    long int l=factorial(num);
    printf("%ld\n", l);

    return 0;
}
