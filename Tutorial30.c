#include <stdio.h>

int starPattern(int num)
{
    printf("enter a number:\n");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*", j);
        }
        printf("\n");
    }
    return 0;
}

int reverseStarPattern(int num)
{
    printf("enter a number:\n");
    scanf("%d", &num);
    for (int i = 0; i <= num; i++)
    {
        for (int j = 0; j < num - i; j++)
        {
            printf("*", j);
        }
        printf("\n");
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int n, a;
    printf("Hello!, what pattern would you like to print\nEnter number 1 for triangular pattern or 2 for reversed triangular pattern:\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        starPattern(a);
        break;
    case 2:
        reverseStarPattern(a);
        break;
    }
    return 0;
}
