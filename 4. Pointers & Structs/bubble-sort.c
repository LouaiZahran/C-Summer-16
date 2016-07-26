#include <stdio.h>

/// swapping 2 integers by reference (pointers)
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int* array, int arrayLength)
{
    int i, j;
    for (i = 0; i < arrayLength; i++) {
        for (j = 0; j < arrayLength; j++) {
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}

int main()
{
    int array[] = {5, 4, 3, 2, 1};
    int arrayLength = sizeof(array) / sizeof(array[0]);
    int i;

    printf("Array before sorting:\n");
    for (i = 0; i < arrayLength; i++) {
        printf("%i ", array[i]);
    }

    bubble_sort(array, arrayLength);

    printf("\n\nArray after sorting:\n");
    for (i = 0; i < arrayLength; i++) {
        printf("%i ", array[i]);
    }

    return 0;
}
