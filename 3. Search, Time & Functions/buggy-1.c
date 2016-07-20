/******************************
 * should print 10 asterisks, one per line, but doesn't.
 * can you find the bug?
 *******************************/

#include <stdio.h>

int main(void)
{
    for (int i = 0; i <= 10; i++)
        printf("*");
        printf("\n");
}
