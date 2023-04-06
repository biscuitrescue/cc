#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void check_status(){
    FILE* f;
    char state;
    char status[30];
    f = fopen("/sys/class/power_supply/BAT0/status", "r");

    do {
        state = getc(f);
        strncat(status, &state, 1);
    } while (state != EOF);

    fclose(f);

    /* if(strcmp(status, "Discharging\n") == 0) { */
    /*     printf("True"); */
    /* } else { */
        /* printf("False"); */
    /* } */
    printf("%s", status);
    /* printf("Discharging\n"); */

    /* return false; */
}


int main(){

    check_status();

    return 0;
}
