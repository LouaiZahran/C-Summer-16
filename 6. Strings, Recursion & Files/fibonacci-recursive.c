#include <stdio.h>

long fib(long n)
{
    if (n == 0 || n == 1)
        return 1;

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    long x = 10000;
    printf("Fibonacci of %ld = %ld", x, fib(x));

    return 0;
}
