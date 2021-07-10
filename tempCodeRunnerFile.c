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
    else if (c1 == 'r' && c2 == 's')
    {
        return 1;
    }
    else if (c1 == 'r' && c2 == 'p')
    {
        return 0;
    }
    else if (c1 == 'p' && c2 == 'r')
    {
        return 1;
    }
    else if (c1 == 'p' && c2 == 's')
    {
        return 0;
    }
    else if (c1 == 's' && c2 == 'r')
    {
        return 0;
    }
    else if (c1 == 's' && c2 == 'p')
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
        //Player's turn
        printf("Choose 0 for Rock, 1 for Paper or 2 for Scissor: \n");
        printf("Player's turn:\n");
        scanf("%d", &temp);
        getchar();
        playerchar = dict[temp - 1];
        printf("You chose %c\n\n", playerchar);

        //Computer's turns
        printf("Choose 0 for Rock, 1 for Paper or 2 for Scissor: \n");
        temp = generateRandomNumber(3) + 1;
        compchar = dict[temp - 1];
        printf("CPU chose %c\n\n", compchar);

        if (greater(playerScore, compScore) == 1)
        {
            compScore++;
            printf("Computer wins\n");
        }
        else if (greater(playerScore, compScore) == -1)
        {
            compScore++;
            playerScore++;
            printf("It's a DRAW, Both get 1 point!\n");
        }
        else
        {
            playerScore++;
            printf("Player wins\n");
        }

        printf("~~~~~~~~~\n");
        printf("~~~~You: %d ||\n", playerScore);
        printf("~~~~CPU: %d ||\n", compScore);
        printf("~~~~~~~~~\n");
    }

    printf("++++Final Score++++");

    if (playerScore > compScore)
    {
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("Player wins!\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    }
    else if (playerScore < compScore)
    {
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("Computer wins! Better luck next time!\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    }
    else
    {
        printf("It's a Draw!\n");
    }

    printf("|~~~~~~~~|~~~~~~~~~|\n");
    printf("|   You  |   CPU   |\n%d");
    printf("|   %d   |   %d    |\n%d", playerScore, compScore);
    printf("|~~~~~~~~|~~~~~~~~~|\n");

    return 0;
}
