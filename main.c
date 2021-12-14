#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char **argv)
{
    int i, number, currentGuess, MAX_GUESS = 40;
    int answer = 'n';
    int max_value = 0;
    time_t t;
    if (argc == 1)
        max_value = 100;
    if (argc >= 2)
        max_value =atoi(argv[1]);
    srand((unsigned) time(&t));
    number = rand() % max_value + 1;

    printf("Welcome to the game of Guess It! \nI will choose a number between 1 and %i. \nYou will try to guess that number.", max_value);
    printf("If you guess wrong, I will tell you if you guessed too high or too low.\n");
    printf("\nOK, I am thinking of a number. Try to guess it. \n");

    for (i = 0; i < MAX_GUESS; i++) {
        printf("\nYour guess?");
        scanf("%i", &currentGuess);

        if (currentGuess > max_value) {
            printf("Illegal guess. Your guess must be between 1 and %i.\n Try again\n", max_value);
            printf("Try again.\n ");
        }
        else if (currentGuess > number) {
            printf("Too high!\n");
        }
        else if (currentGuess < number) {
            printf("Too low!\n");
        }
        else if(currentGuess == number) {
            printf("**CORRECT**\n");
            return 0;
        }
    }

    printf("Sorry you have entered the maximum number of tries. \n");
    printf("Want to play again? Y or N\n");
    scanf("%i", &answer);

    if(answer == 'N') {
        printf("Goodbye, it was fun. Play again soon.\n");
        return 0;
    }
    else if (answer == 'Y') {
        printf("Ok, I am thinking of a number. Try to guess it.\n");
    }
}
