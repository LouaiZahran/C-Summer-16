#include <stdio.h>

long fibonacci[100] = {0}; /** initialize all numbers to zero */

long fib(long n)
{
    if (n == 0 || n == 1)
        return fibonacci[n];

    if (fibonacci[n - 1] == 0) { /** not calculated before */
        fibonacci[n - 1] = fib(n - 1);
    }

    if (fibonacci[n - 2] == 0) { /** not calculated before */
        fibonacci[n - 2] = fib(n - 2);
    }

    fibonacci[n] = fibonacci[n - 1] + fibonacci[n - 2];

    return fibonacci[n];
}

int main()
{
    fibonacci[0] = 1;
    fibonacci[1] = 1;

    long x = 7;
    printf("Fibonacci of %ld = %ld", x, fib(x));

    return 0;
}
