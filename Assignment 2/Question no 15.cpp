#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline

    for (int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    printf("The count of each character in the string is:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c\t%d\n", i, freq[i]);
        }
    }

    return 0;
}
