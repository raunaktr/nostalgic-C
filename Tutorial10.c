#include <stdio.h>

int main(int argc, char const *argv[])
{
    // int age;
    // printf("Enter your age:\n");
    // scanf("%d", &age);

    // printf("You have entered %d as your age.\n", age);
    // if (age >= 18)
    // {
    //     printf("Valid voting age\n");
    // }
    // else
    // {
    //     printf("You can't vote\n");
    // }
    int mat, sci;

    printf("Enter your marks in maths\n: ");
    scanf("%d\n", &mat);
    printf("Enter your marks in Science\n: ");
    scanf("%d\n", &sci);

    if (mat >= 40 && sci >= 40)
    {
        printf("you have won 45rs\n");
    }
    else if (mat >= 40)
    {
        printf("you have won 15rs for passing maths\n");
    }
    else if (sci >= 40)
    {
        printf("you have won 15rs for passing Science\n");
    }
    else
    {
        printf("You have failed the exams\n");
    }

    return 0;
}
