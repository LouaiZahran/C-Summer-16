#include <stdio.h>

int main()
{
    int i, sum = 0;
    for (i = 0; i <= 10; i++) {
        sum += i;
    }

    printf("Sum from 0 to 10 is %i", sum);

    return 0;
}
