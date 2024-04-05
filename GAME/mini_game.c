#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number_to_guess, player_guess, cont = 0;
    srand(time(NULL));

    number_to_guess = rand() % 100 + 1;

    printf("Welcome to the Guess the Number game!\n");
    printf("I'm thinking of a number between 1 and 100. Try to guess it.\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &player_guess);
        cont++;

        if (player_guess < number_to_guess)
            printf("Too low! Try again.\n");
        else if (player_guess > number_to_guess)
            printf("Too high! Try again.\n");
        else
            printf("Congratulations! You've guessed the number (%d) in %d attempts!\n", number_to_guess, cont);
    } while (player_guess != number_to_guess);

    return 0;
}
