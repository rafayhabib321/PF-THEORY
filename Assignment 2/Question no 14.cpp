#include <stdio.h>
#include <string.h>

void reverseStr(char str[]) {
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main() {
    char str1[100], str2[100];
    int isSame = 1;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove newline

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; // Remove newline

    for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            isSame = 0;
            break;
        }
    }

    if (isSame) {
        printf("Strings are the same.\n");
    } else {
        printf("Strings are not the same.\n");
    }

    printf("Reversed strings are:\n");
    reverseStr(str1);
    reverseStr(str2);

    return 0;
}
