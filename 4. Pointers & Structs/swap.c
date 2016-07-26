#include <stdio.h>

/// swapping 2 integers by reference (pointers)
void swapRef(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/// swapping 2 integers by value (copy)
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 5, y = 6;
    printf("Before swapping: x = %i, y = %i\n", x, y);
    swap(x, y);
    printf("After swapping: x = %i, y = %i\n", x, y);

    printf("\n----------------------------\n\n");

    printf("Before swapping: x = %i, y = %i\n", x, y);
    swapRef(&x, &y);
    printf("After swapping: x = %i, y = %i\n", x, y);

    return 0;
}
