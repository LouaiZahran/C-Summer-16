#include <stdio.h>

int main()
{
    int x = 5;
    int *ptr_x = &x;
    printf("%i\n", *ptr_x);


    int array[] = {45, 67, 89};
    int *array_ptr = &array[1];
    printf("%i\n", array_ptr[1]);

    return 0;
}
