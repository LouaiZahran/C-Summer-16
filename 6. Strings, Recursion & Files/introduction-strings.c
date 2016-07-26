#include <stdio.h>

int main(int argc, char *argv[])
{
    char c = 'a';
    printf("ASCII value of %c = %d\n", c, c);

    char *str = malloc(64 * sizeof(char));
    printf("Enter a string: ");
    gets(str);

    printf("%s\n", str);

    strrev(str);

    printf("%s\n", str);

    return 0;
}
