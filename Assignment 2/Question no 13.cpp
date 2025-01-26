#include <stdio.h>
#include <ctype.h>	// For character functions
#include <string.h>	// For string functions

int main() {
    char str[100];
    int i, vowels = 0, consonants = 0, digits = 0, spaces = 0, special = 0, uppercase = 0, lowercase = 0, words = 1;

    printf("Input a string: ");
    fgets(str, sizeof(str), stdin);	// Read the string, including spaces, from the user

	// Loop through each character in the string until the null terminator
    for (i = 0; str[i] != '\0'; i++) {
    	// Check if the character is a letter
        if (isalpha(str[i])) {
        	// Check if the character is a vowel
            if (strchr("AEIOUaeiou", str[i])) {
                vowels++;	// Increment vowel count
            } else {
                consonants++;	// Increment consonant count
            }
            
            // Check if the letter is uppercase or lowercase
            if (isupper(str[i])) {
                uppercase++;
            } else {
                lowercase++;	
            }
            
            // Check if the character is a digit
        } else if (isdigit(str[i])) {
            digits++;
        } else if (isspace(str[i])) {
            spaces++;
            // Count words based on spaces followed by non-space characters
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
