#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Use of malloc
    // int *ptr;
    // ptr = (int *)malloc(3 * sizeof(int));
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("The value of %d of this array is:\t");
    //     scanf("%d", &ptr[i]);
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     printf("%d\n", ptr[i]);
    // }

    // Use of realloc
    int *ptr, n;
    printf("Enter the size of the array: \n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d of this array is:\t");
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    // Use of realloc
    free(ptr);

    printf("Enter the size of the new array: \n");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d of this array is:\t");
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }
    free(ptr);

    return 0;
}
