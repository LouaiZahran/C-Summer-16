/* reads in two ints and prints their sum.
 */

#include <stdio.h>

int main(void)
{
   int x,y;
    // ask user for input
    printf("Give me an integer: ");
    scanf("%i",&x );
    printf("Give me another integer: ");
    scanf("%i",&y );

    // do the math
    printf("The sum of %i and %i is %i!\n", x, y, x + y);
}
