#include <stdio.h>

int main()
{
    int i, j;

    /* first array declaration and initialization */
    int firstArray[] = {5, 63, 9, 68, 41, 12, 88, 75, 32, 33};
    int firstArrayLength = sizeof(firstArray) / sizeof(firstArray[0]); // 10

    /* second array declaration and initialization */
    int secondArray[] = {12, 65, 48, 33, 56, 82, 23, 68};
    int secondArrayLength = sizeof(secondArray) / sizeof(secondArray[0]); // 8

    int maxIntersectionLength = (firstArrayLength < secondArrayLength) ? firstArrayLength : secondArrayLength;
    int maxUnionLength = firstArrayLength + secondArrayLength;

    /* declare arrays to fill */
    int intersectionArray[maxIntersectionLength];
    int unionArray[maxUnionLength];

    /* intersection */
    int intersectionArrayCounter = 0;

    for (i = 0; i < firstArrayLength; i++) {
        for (j = 0; j < secondArrayLength; j++) {
            /* if element is present in both arrays
             * add to intersection array
             */
            if (firstArray[i] == secondArray[j]) {
                intersectionArray[intersectionArrayCounter] = firstArray[i];
                intersectionArrayCounter++;
            }
        }
    }

    /* print array */
    printf("Intersection array:\n");
    for (i = 0; i < intersectionArrayCounter; i++) {
        printf("%d ", intersectionArray[i]);
    }

    printf("\n\n");

    /* union */
    int unionArrayCounter = 0;

    /* add elements of first array */
    for (i = 0; i < firstArrayLength; i++) {
        unionArray[unionArrayCounter] = firstArray[i];
        unionArrayCounter++;
    }

    /* check second array */
    for (i = 0; i < secondArrayLength; i++) {
        int isAlreadyInUnion = 0;

        /* check if element was in first array
         * then don't add to unionArray
         */
        for (j = 0; j < unionArrayCounter; j++) {
            if (secondArray[i] == unionArray[j])
                isAlreadyInUnion = 1;
        }

        if (!isAlreadyInUnion) {
            unionArray[unionArrayCounter] = secondArray[i];
            unionArrayCounter++;
        }
    }

    /* print array */
    printf("Union array:\n");
    for (i = 0; i < unionArrayCounter; i++) {
        printf("%d ", unionArray[i]);
    }

    printf("\n");

    return 0;
}
