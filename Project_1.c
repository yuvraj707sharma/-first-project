/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initialize random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed_number;

    // Print the random number
     //printf("Random Number: %d\n", randomNumber);

    do
    {
        printf("Guess the number");
        scanf("%d", &guessed_number);
        if(guessed_number>randomNumber){
            printf("Lower number please!\n");
        }
        else if(guessed_number<randomNumber){
            printf("Higher number please!\n");
        }
        else{
            printf("Congrats!!\n");
        }
        no_of_guesses++;

    } while (guessed_number != randomNumber);

    printf("You guessed the number in %d guesses", no_of_guesses);

    return 0;
}*/
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); // Seed for random number generator
    int secretNumber = rand() % 100 + 1; // Random number between 1 and 100
    int guess;
    int attempts = 0;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 100. Try to guess it!\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } else if (guess > secretNumber) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            break;
        }
    }

    printf("Thanks for playing!\n");
    return 0;
}*/#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int randomNumber = (rand() % 100) + 1, guess, attempts = 0;

    do {
        printf("Guess the number: ");
        scanf("%d", &guess);
        printf(guess > randomNumber ? "Lower number please!\n" : (guess < randomNumber ? "Higher number please!\n" : "Congrats!!\n"));
        attempts++;
    } while (guess != randomNumber);

    printf("You guessed it in %d attempts.\n", attempts);
    return 0;
}