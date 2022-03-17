#include <stdio.h>
#include <stdbool.h>

int main()
{
    int x=13;
    int is_prime=true;
    for(int i=x-1;i>1;i--)
    {
        /* printf("%i ", i); */
        if (x%i==0)
        {
            is_prime=false;
        }
    }
    if(is_prime)
    {
        printf("Is prime\n");
    } else {
        printf("Not prime\n");
    }

    return 0;
}
