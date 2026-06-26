#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess, number;

    srand(time(0));
    number = rand() % 100 + 1;   // random number 1–100

    printf("Guess the number (1 to 100): ");

    while(1) {
        scanf("%d", &guess);

        if(guess == number) {
            printf("Correct! You guessed the number.\n");
            break;
        }
        else if(guess < number)
            printf("Too low, try again: ");
        else
            printf("Too high, try again: ");
    }

    return 0;
}
