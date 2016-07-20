/**
 * Tells user if his or her input is odd or even.
 *
 * Demonstrates use of if-else construct.
 */

#include <stdio.h>

int main(void){
    printf("Give me a number: ");
    int n;
    scanf("%i", &n);

    //if even
    if(n%2 == 0) {
        printf("The number you entered is even.\n");
    }
    else {
        printf("The number you entered is odd.\n");
    }
}
