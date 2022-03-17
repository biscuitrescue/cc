#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool pizza;
    int temp;
    printf("Is pizza healthy?\n1) Yes\n2) No\n");
    scanf("%d", &temp);
    temp--;
    pizza=temp;
    if(pizza)
    {
        printf("Pizza is healthy\n");
    }

    return 0;
}
