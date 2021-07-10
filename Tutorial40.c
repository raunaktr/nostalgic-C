#include <stdio.h>
#include <string.h>

void arrayReverse(int arr[])
{
    int temp;

    for (int i = 0; i < 7/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[6 - i];
        arr[6 - i] = temp;
    }
    return;
}
int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5, 6, 32};
    for (int i = 0; i < 7; i++)
    {
        printf("The %d value of an array is: %d\n", i, arr[i]);
    }
    printf("\n");
    arrayReverse(arr);
    for (int i = 0; i < 7; i++)
    {
        printf("The %d value of an array is: %d\n", i, arr[i]);
    }

    return 0;
}
