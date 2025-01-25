#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, g, a = 4, p;

    srand(time(0));
    n = rand() % 100 + 1;

    printf("Guess the number between 1 and 100. You have 4 attempts.\n");

    do {
        for (int i = 0; i < a; i++) {
            printf("Enter guess: ");
            scanf("%d", &g);

            if (g == n) {
                printf("Correct! You guessed the number.\n");
                break;
            } else if (g < n) {
                printf("Too low.\n");
            } else {
                printf("Too high.\n");
            }
            printf("Attempts left: %d\n", a - i - 1);
        }

        if (g != n) {
            printf("Game Over. The number was %d.\n", n);
        }

        printf("Play again? (1 for Yes, 0 for No): ");
        scanf("%d", &p);
        
        if (p == 1) {
            a = 4;
            n = rand() % 100 + 1;
        }

    } while (p == 1);

    return 0;
}
