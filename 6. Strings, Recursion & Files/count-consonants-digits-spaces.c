#include <stdio.h>

int isVowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

int isLetter(char c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int isDigit(char c)
{
    return (c >= '0' && c <= '9');
}

void do_the_count(char *line, int* vowels_count, int* consonants_count, int* digits_count, int* spaces_count)
{
    int i;

    for(i = 0; line[i] != '\0'; i++) {
        if (isVowel(line[i]))
            (*vowels_count)++;
        else if (isLetter(line[i]))
            (*consonants_count)++;
        else if (isDigit(line[i]))
            (*digits_count)++;
        else if (line[i] == ' ')
            (*spaces_count)++;
    }
}

int main()
{
    char line[150]; // This program is easy 2 understand
    int vowels_count, consonants_count, digits_count, spaces_count;
    vowels_count = consonants_count = digits_count = spaces_count = 0;
    printf("Enter a line of string\n");
    gets(line);

    do_the_count(line, &vowels_count, &consonants_count, &digits_count, &spaces_count);

    printf("Vowels: %d\n", vowels_count);
    printf("Consonants: %d\n", consonants_count);
    printf("Digits: %d\n", digits_count);
    printf("White spaces: %d", spaces_count);

    return 0;
}
