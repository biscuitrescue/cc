#include <stdio.h>

int main(){
    int num;
    printf("Please enter a value for num: ");
    scanf("%d", &num); // Use %lf for taking input in float
    printf("Number is %d\n", num);

    int lim=20;
    char name[lim];
    printf("Enter your name: ");
    fgets(name, lim, stdin);
    printf("Your grade is: %s", name);

    return 0;
}
