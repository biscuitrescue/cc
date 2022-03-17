#include <stdio.h>

int main()
{
    int slices=3;

    switch(slices)
    {
        case 1:
            printf("yayy\n");
            break;
        case 2:
            printf("okay\n");
            break;
        case 3:
            printf("bad\n");
            break;
        case 4:
            printf("fuck off\n");
            break;
        default:
            printf("huh???\n");
            break;
    }

    return 0;
}
