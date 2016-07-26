#include<stdio.h>

void swapStrings(char *str1, char *str2)
{
    char *temp = malloc((strlen(str1) + 1) * sizeof(char));
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
    free(temp);
}

int main()
{
    int i, j, n = 5, swapped;
    char str[n][32];
    printf("Enter %d words:\n", n);

    for(i = 0; i < n; i++) {
        gets(str[i]);
    }

    for(i = 0; i < n; i++) {
        swapped = 0;
        for(j = 0; j < (n - 1); j++) {
            if(strcmp(str[j], str[j + 1]) > 0) {
                swapStrings(str[j], str[j + 1]);
                swapped = 1;
            }
        }

        if(!swapped)
            break;
    }

    printf("\nIn alphabetical order: \n");

    for(i = 0; i < n; i++) {
        puts(str[i]);
    }

    return 0;
}
