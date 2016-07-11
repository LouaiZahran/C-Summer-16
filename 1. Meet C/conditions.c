/**
 * Tells user if his or her input is positive or negative (somewhat
 * inaccurately).
 *
 * Demonstrates use of if-else construct.
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    // ask user for an integer
    printf("I'd like an integer please: ");
    int n;
    scanf("%i",&n);

    // analyze user's input (somewhat inaccurately)
    if (n > 0)
    {
        printf("You picked a positive number!\n");
    }
    else
    {
        printf("You picked a negative number!\n");
    }

    if( n == 0){
        printf("You picked zero,\n");
    }
}
