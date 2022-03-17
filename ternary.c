#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=0; i<11; i++)
    {
        if(i==7)
        {
            printf("This is not your number\n");
            i++;
        }
        printf("%i\n", i);
    }
    int i = 0;
    while(i<11)
    {
        if(i==7)
        {
            printf("This is not your number\n");
            i++;
        }
        printf("%i\n", i);
        i++;
    }
    
    return 0;
}
