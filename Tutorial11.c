#include <stdio.h>
int main()
{

    int age;
    printf("Enter your age:\n");
    scanf("%d", &age);

    switch (age)
    {
    case 15:
        printf("Age is 15\n");
        break;
    case 25:
        printf("Age is 25\n");
        break;

    default:
        printf("Age is not 15 or 25\n");
        break;
    }

    return 0;
}