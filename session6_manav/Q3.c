#include <stdio.h>
#include <string.h>

int main()
{
    char songs[5][50] = {
        "Winnning Speech",
        "MF Ghabru",
        "52 Bars",
        "For a reason",
        "Wavy"
    };

    char guess[50];
    int choice = 1;   // Selects "MF Ghabru"

    printf("===== Guess the Song Game =====\n");
    printf("Guess the song name!\n\n");

    do
    {
        printf("Enter your guess: ");
        scanf(" %[^\n]", guess);

        if (strcmp(guess, songs[choice]) == 0)
        {
            printf("Correct!\n");
            printf("The song is: %s\n", songs[choice]);
        }
        else
        {
            printf("Wrong guess! Try again.\n");
        }

    } while (strcmp(guess, songs[choice]) != 0);

    return 0;
}
