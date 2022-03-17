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
        printf("You won\n");
    } else if(y>maxval)
    {
        printf("Invalid response\nExecute agian\n");
        /* return 0; */
    } else
    {
        printf("You lost\nBetter luck next time\n");
    }

    return 0;
}
