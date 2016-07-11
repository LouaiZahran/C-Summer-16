/**
 * Tells user if his or her input is positive or negative
 *
 * Demonstrates use of if-else construct.
 */

#include <stdio.h>

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
    else if (n < 0)
    {
        printf("You picked a negative number!\n");
    }
    else{
      printf("You picked zero! \n");
    }
}
