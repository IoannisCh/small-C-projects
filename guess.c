/*
 Author:Ioannis_Ch
 Date:10/06/2020
 Purpose:Training
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    // Declare the variables
    int randomNumber = 0;
    int guess = 0;
    int numberOfGuesses;
    time_t t;

    // Initializating random number generator
    srand((unsigned) time(&t));

    // Get the random number
    randomNumber = rand() % 21;

    // Display information to the user
    printf("\nThis is a guessing game.");
    printf("\nGuess a number between 0 to 20. \n");

    
    // Game core
    for(numberOfGuesses = 5; numberOfGuesses > 0; --numberOfGuesses)
    {
        printf("\nYou have %d tr%s left.", numberOfGuesses, numberOfGuesses == 1 ? "y" : "ies"); // correct info on guesses left
        printf("\nEnter a guess: ");
        scanf("%d", &guess);
	// In case of correct guess
        if(guess == randomNumber)
        {
            printf("\nCongratulations.  You guessed it!\n");
            return 0;
        }
	// Check if the number is a valid, smaller or bigger  number
        else if(guess < 0 || guess > 20) 
            printf("I said the number is between 0 and 20.\n");
        else if(randomNumber > guess)
            printf("Sorry, %d is wrong.  My number is greater than that.\n", guess);
        else if(randomNumber < guess)
            printf("Sorry, %d is wrong.  My number is less than that.\n", guess);
    }
    printf("\nYou have had five tries and failed. The number was %d\n",randomNumber);
     

}
