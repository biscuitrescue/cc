#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int maxval=5;
    srand(time(NULL));
    int x=rand()%maxval+1;
    int y;
    printf("Enter number: ");
    scanf("%d",&y);

    if(x==y)
    {
        printf("You are correct\n");
        return 0;
    }
    if(y>maxval)
    {
        printf("Invalid response\n");
        return 0;
    }
    printf("You are wrong\n");

    return 0;
}
