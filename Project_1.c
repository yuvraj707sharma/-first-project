#include <stdio.h>
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
