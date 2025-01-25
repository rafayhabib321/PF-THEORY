#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    int i, vowels = 0, consonants = 0, digits = 0, spaces = 0, special = 0, uppercase = 0, lowercase = 0, words = 1;

    printf("Input a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            if (strchr("AEIOUaeiou", str[i])) {
                vowels++;
            } else {
                consonants++;
            }
            if (isupper(str[i])) {
                uppercase++;
            } else {
                lowercase++;
            }
        } else if (isdigit(str[i])) {
            digits++;
        } else if (isspace(str[i])) {
            spaces++;
            if (str[i] == ' ' && str[i + 1] != '\0' && str[i + 1] != ' ') {
                words++;
            }
        } else {
            special++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Uppercase letters: %d\n", uppercase);
    printf("Lowercase letters: %d\n", lowercase);
    printf("Special characters: %d\n", special);
    printf("Words: %d\n", words);

    return 0;
}
