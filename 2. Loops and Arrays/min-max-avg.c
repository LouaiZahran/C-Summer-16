#include <stdio.h>

int main()
{
    int i, n;

    printf("Please enter number of elements: ");
    scanf("%d", &n);

    int myArray[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &myArray[i]);
    }

    int min = myArray[0], max = myArray[0], sum = 0;

    for (i = 0; i < n; i++) {
        if (myArray[i] < min)
            min = myArray[i];

        if (myArray[i] > max)
            max = myArray[i];

        sum += myArray[i];
    }

    float avg = (float) sum / n;

    printf("Max is %d\n", max);
    printf("Min is %d\n", min);
    printf("Avg is %f\n", avg);
    printf("Sum is %d", sum);

    return 0;
}
