//Create Rock, Paper & Scissors Game
// Player 1: rock
// Player 2 (computer): scissors -->player 1 gets 1 point

// rock vs scissors - rock wins
// paper vs scissors - scissors wins
// paper vs rock - paper wins
// Write a C program to allow user to play this game three times with computer. Log the scores of computer and the player. Display the name of the winner at the end
// Notes: You have to display name of the player during the game. Take users name as an input from the user.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL)); //srand takes seed as an input and is defined inside stdlib.h
    return rand() % n;
}

int greater(char c1, char c2)
{
    if (c1 == c2)
    {
        return -1;
    }
    else if (c1 == 'r' && c2 == 'p')
    {
        return 0;
    }
    else if (c1 == 'r' && c2 == 's')
    {
        return 1;
    }
    else if (c1 == 'p' && c2 == 's')
    {
        return 0;
    }
    else if (c1 == 'p' && c2 == 'r')
    {
        return 1;
    }
    else if (c1 == 's' && c2 == 'r')
    {
        return 0;
    }
    else if (c1 == 's' && c2 == 'p')
    {
        return 1;
    }
    else if (c1 == 'r' && c2 == 's')
    {
        return 1;
    }
}

int main()
{
    int playerScore = 0, compScore = 0, temp;
    char playerchar, compchar;
    char dict[] = {'r', 'p', 's'};

    printf("~~~~~~~~~Welcome to Rock, Paper & Scissors~~~~~~~~~\n");

    for (int i = 0; i < 3; i++)
    {
        printf("1 for Rocks, 2 for Papers or 3 for Scissors\n");
        printf("Player's turn:\n");
        scanf("%d", &temp);
        getchar();
        playerchar = dict[temp] + 1;
        printf("~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("    You chose    %c   \n", playerchar);
        printf("~~~~~~~~~~~~~~~~~~~~~~~~\n");

        printf("1 for Rocks, 2 for Papers or 3 for Scissors\n");
        temp = generateRandomNumber(3) + 1;
        compchar = dict[temp] + 1;
        printf("~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("    CPU chose    %c   \n", compchar);
        printf("~~~~~~~~~~~~~~~~~~~~~~~~\n");

        // Call a function for comparison operator
        if ((greater(compchar, playerchar)) == 1)
        {
            compScore++;
        }
        else if ((greater(compchar, playerchar)) == -1)
        {
            playerScore++;
            compScore++;
        }
        else
        {
            playerScore++;
        }

        printf("~~~~~~~~~~~~~~~~~~~~~\n");
        printf("~~~CPU scored ==== %d\n", compScore);
        printf("~~~You scored ==== %d\n", playerScore);
        printf("~~~~~~~~~~~~~~~~~~~~~\n");
    }

    if (compScore > playerScore)
    {
        printf("You won\n");
    }
    else if (compScore < playerScore)
    {
        printf("CPU won");
    }
    else
    {
        printf("It is a draw");
    }

    return 0;
}
