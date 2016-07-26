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
    int i, j;
    char str[2][50];
    printf("Enter 10 words:\n");

    for(i = 0; i < 2; ++i) {
        gets(str[i]);
    }

    for(i = 0; i < 1; ++i) {
        for(j = i + 1; j < 2 ; ++j) {
            if(strcmp(str[i], str[j]) > 0) {
                swapStrings(str[i], str[j]);
            }
        }
    }

    printf("\nIn lexicographical order: \n");

    for(i = 0; i < 2; i++) {
        puts(str[i]);
    }

    return 0;
}
