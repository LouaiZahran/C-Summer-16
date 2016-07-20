#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int);  //predicate: functions that return booleans.

int main(void)
{

    if(isPrime(1046527)){
        printf("1046527 is prime");
    }
}

/**
 * Says if n is a prime or not. n is prime if and only if n has only the two factors: n & 1.
 * @param: takes in a positive integer n.
 * @return: true if n is Prime and false otherwise.
 */


bool isPrime(int n)
{
    //for numbers with a sqrt smaller than 2, the loop condition will never be true.
    if(n == 2 || n == 3) return true;

    //special case
    if(n == 1) return false;

    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
