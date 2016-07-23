#include <stdio.h>

int main()
{
    int array[] = {5, 4, 3, 2, 1};
    int arrayLength = sizeof(array) / sizeof(array[0]);
    int i, target = 3;

    for (i = 0; i < arrayLength; i++) {
        if (array[i] == target) {
            printf("%d found at index %d", target, i);
        }
    }

    return 0;
}
