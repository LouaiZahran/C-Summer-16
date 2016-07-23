#include <stdio.h>

int main()
{
    int array[] = {5, 4, 3, 2, 1};
    int arrayLength = sizeof(array) / sizeof(array[0]);
    int i, j, min, temp;

    for (i = 0; i < (arrayLength - 1); i++) {
        min = i;

        /** search for smaller value */
        for (j = i + 1; j < arrayLength; j++) {
            if (array[min] > array[j])
                min = j;
        }

        /** if smaller value found, then swap */
        if (min != i) {
            temp = array[i];
            array[i] = array[min];
            array[min] = temp;
        }
    }

    printf("Array in ascending order:\n");
    for (i = 0; i < arrayLength; i++) {
         printf("%d ", array[i]);
    }

    return 0;
}
