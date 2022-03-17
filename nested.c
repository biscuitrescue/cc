#include <stdio.h>

int main(){
    int i=0, k;
    /* for(i=0;i<11;i++) */
    /* { */
    /*     for(k=i;k>=0;k--) */
    /*     { */
    /*         printf("%i ", k); */
    /*     } */
    /*     printf("\n"); */
    /* } */
    while(i<=10)
    {
        k=10-i;
        while(k<=10)
        {
            printf("%d ", 10-k);
            k++;
        }
        printf("\n");

        i++;
    }
    return 0;
}
