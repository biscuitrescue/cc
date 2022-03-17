#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isprime(int x);
{
    for(int i=sqrt(x); i>1; i--)
    {
        if(x%i==0)
        {
            return false;
        }
    }

    return true;
}

int main(){

    return 0;
}
