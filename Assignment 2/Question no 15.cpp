#include <stdio.h>
#include <string.h>

int main() {
    char str[100];                
    int freq[256] = {0};          // Array to store frequency of each ASCII character

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Reading input from the user
    
    str[strcspn(str, "\n")] = 0;    // Removing the newline character from input

    // Loop through the string until the null terminator is reached
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;       
    }

    // Iterate through the frequency array to check for characters with non-zero count
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {         // Condition to ensure only characters present in the string are processed
            printf("%c\t%d\n", i, freq[i]);
        }
    }

    return 0;
}
