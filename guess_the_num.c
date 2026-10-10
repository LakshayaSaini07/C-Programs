#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess, count = 0;
    // Seed the random number generator with the current time
    srand(time(0));
    // Generate a random number between 1 and 100
    int random = (rand() % 100) + 1;
    do {
        printf("Guess the number between 1 and 100\n");
        printf("Enter the number you guessed: ");
        scanf("%d", &guess);

        if (guess > random) {
            printf("Lower number, please.\n");
        } else if (guess < random) {
            printf("Higher number, please.\n");
        } else {
            printf("You guessed it correctly!\n");
        }
        count++;
    } while (guess != random);
    printf("Number of guesses taken: %d\n", count);
    return 0;
}
