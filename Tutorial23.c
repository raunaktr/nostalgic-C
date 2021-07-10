#include <stdio.h>

int main(int argc, char const *argv[])
{

    // int val[4];
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter the value of %d element of the array is\n", i);
    //     scanf("%d", &val[i]);
    // }
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("The value of %d element of the array is %d\n", i, val[i]);
    // }
    int matrice[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter a number between (1-9): ");
            scanf("%d", &matrice[i][j]);
        }
    }
    printf("\n\n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }

    return 0;
}
