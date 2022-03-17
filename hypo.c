#include <stdio.h>
#include <math.h>

int main(){
    double x;
    double y;

    printf("Enter number 1: ");
    scanf("%lf", &x);
    printf("Enter number 2: ");
    scanf("%lf", &y);

    double hypo=sqrt((x*x)+(y*y));
    printf("The hypotenuse of the triangle is %f\n", hypo);

    return 0;
}
