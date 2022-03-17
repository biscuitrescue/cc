#include <stdio.h>
#include <stdlib.h>


/* int main(){ */
    
/*     int x=6; */
/*     int my_grade[x]; */
/*     for(int i=0; i<=x; i++) */
/*     { */
/*         my_grade[i]=(i*5); */
/*     } */
/*     int size=sizeof(my_grade)/sizeof(my_grade[0]); */
/*     printf("%d\n", my_grade[size]); */
    
/*     return 0; */
/* } */

// Multidimensional arrays

int main()
{
    const int col=3;
    int array[][col]={
        {12,23,34},
        {45,56,67}
    }

    int size=sizeof(array)/sizeof(array[0]);
    for(int i=0; i<size; i++)
    {
        int siz=sizeof(array[i])/sizeof(array[i][0]);
        for(int k=0; k<siz; k--)
        {
            printf("%d ", array[i][k]);
        }
    }

    return 0;
}
