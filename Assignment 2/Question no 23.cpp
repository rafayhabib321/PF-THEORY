#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, g, a = 4, p;

    srand(time(0)); // Seed the random number generator
    n = rand() % 100 + 1; // Generate a random number between 1 and 100

    printf("Guess the number between 1 and 100. You have 4 attempts.\n");

    do {
        // Loop for the player's 4 attempts
        for (int i = 0; i < a; i++) {
            printf("Enter guess: ");
            scanf("%d", &g);

            // Condition to check if the guess is correct
            if (g == n) {
                printf("Correct! You guessed the number.\n");
                break; // Exit the loop if the guess is correct
            } 
            // Condition to check if the guess is too low
            else if (g < n) {
                printf("Too low.\n");
            } 
            // Condition to check if the guess is too high
            else {
                printf("Too high.\n");
            }
            printf("Attempts left: %d\n", a - i - 1);
        }

        if (g != n) {
            printf("Game Over. The number was %d.\n", n);
        }

        printf("Play again? (1 for Yes, 0 for No): ");
        scanf("%d", &p);

        // Reset the number and attempts for a new game
        if (p == 1) {
            a = 4;
            n = rand() % 100 + 1; // Generate a new random number
        }

    } while (p == 1); // Loop to restart the game if the player chooses to play again

    return 0;
}
