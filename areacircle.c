#include <stdio.h>

int main(){
    int radius;
    printf("Please input the radius: ");
    scanf("%i", &radius);
    double pi=3.141;
    double area=(double)radius*radius*pi;
    printf("The area of circle is %f units\n", area);

    return 0;
}