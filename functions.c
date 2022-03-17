#include <stdio.h>

void factorial(int x)
{
    int y=1;
    for(int i=x; i>1; i--)
    {
        y*=i;
    }
    printf("%d", y);
}

int main()
{
    int num;
    printf("Please enter your number: ");
    scanf("%d", &num);
    factorial(num);

    return 0;
}