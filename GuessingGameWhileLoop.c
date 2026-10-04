/* 
Name: Carl Oliver
Admission Number: BCS-05-0067/2026
Description: Number Guessing Game (While Loop)
*/

#include <stdio.h>
#include <stdlib.h>  // for rand() and srand()
#include <time.h>    // for time()

int main() {
    int secretNumber, guess, attempts = 0;

    // Generate random number between 1 and 20
    srand(time(0));  
    secretNumber = (rand() % 20) + 1;

    // Ask first guess before entering the loop
    printf("Enter your guess (1-20): ");
    scanf("%d", &guess);
    attempts++;

    // While loop continues until correct guess
    while (guess != secretNumber) {
        if (guess > secretNumber) {
            printf("Too high!\n");
        } else {
            printf("Too low!\n");
        }

        // Ask again
        printf("Enter your guess (1-20): ");
        scanf("%d", &guess);
        attempts++;
    }

    // If loop ends, guess is correct
    printf("Congratulations!\n");
    printf("You guessed it in %d attempts.\n", attempts);

    return 0;
}
