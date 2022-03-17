#include <stdio.h>
#include <string.h>

int main(){
    printf("What is your favourite food? ");
    char phrase[50];
    scanf("%49s", phrase);
    printf("%s\n", phrase);

    /* int count=0; */

    int count=strlen(phrase);
    /* while(phrase[count]!='\0') */
    /* { */
    /*     count++; */
    /* } */
    printf("%d\n", count);

    return 0;
}
