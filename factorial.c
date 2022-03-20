#include <stdio.h>

int calc_fact(int x){
    int factorial=1;
    for(int i=1; i<=x; i++){
        factorial*=i;
    }

    return factorial;
}

int main(){
    int x;
    printf("Enter your number: ");
    scanf("%d", &x);
    printf("%d\n", calc_fact(x));

    return 0;
}
