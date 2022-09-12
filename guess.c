#include <stdio.h>
#include <stdlib.h>

void game()
{
    int lower = 1;
    int upper = 100;
    int random_number = (rand () % (upper - lower + 1)) + lower;
    int guess;
    int guess_limit = 5, out_of_guesses=0;

    while (guess != random_number && out_of_guesses == 0)
    {
        if (guess_limit != 0)
        {
            printf("\nGuesses Remaining: %d", guess_limit);
            printf("\n\nEnter a Number between 1 and 100: ");
            scanf("%d", &guess);
            guess_limit--;
            if (guess > random_number)
            {
                printf("guess lower\n");
            } else if (guess < random_number)
            {
                printf("guess higher\n");
            }
            
            
        } else {
            out_of_guesses = 1;
        }
        
    }
    if (out_of_guesses)
    {
        printf("\nGame Over!");
        printf("\nYou are out of guesses\n\n");
    } else
    {
        printf("\nYou Got the Right Number\n\n");
    }
}

int main()
{
    int choice;
    do
    {
        int guess_limit = 5;
        printf("=======================================\n");
        printf("\tGuess The Secret Number\n");
        printf("=======================================\n");
        printf("Guesses Limit: %d", guess_limit);
        printf("\n=======================================\n");
        printf("1 - Play\n");
        printf("2 - Exit\n");
        printf("> ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n**********Enjoy!*********\n");
            game();
            break;
        
        case 2:
            printf("\n**********Exited!*********\n");
            break;
        
        default:
            break;
        }
    } while (choice != 2);
    
    
    return 0;
}