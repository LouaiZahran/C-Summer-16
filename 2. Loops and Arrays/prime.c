#include <stdio.h>

int main()
{
    int num, i = 2, isPrime = 1;
    printf("Please enter a number to check if it's prime or not: ");
    scanf("%d", &num);

    while (i < num) {
        if (num % i == 0) {
            isPrime = 0;
        }
        i++;
    }

    if (num == 0 || num == 1) { /// 0, 1 are not prime numbers
        printf("%d is not a prime number.", num);
    }
    else if (isPrime) {
        printf("%d is a prime number.", num);
    } else {
        printf("%d is not a prime number.", num);
    }

    return 0;
}
