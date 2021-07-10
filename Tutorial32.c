#include <stdio.h>

int sum(int array[])
{
    int sum_of_array = 0;
    for (int i = 0; i < 4; i++)
    {
        sum_of_array += array[i];
    }
    return sum_of_array;
}

int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d is %d\n", i, array[i]);
    }
    return 0;
}

int func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("func2 The value of %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 1323;
    return 0;
}

int func3(int array[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("func3 The value of %d,%d is %d\n", i, j, array[i][j]);
        }
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int result, arr[] = {23, 33, 44, 55};
    int arr1[] = {2, 5, 32, 10};
    int arr2[][2] = {{2, 4}, {5, 6}};
    result = sum(arr);
    printf("Result = %d\n", result);

    printf("The value at index 0 is %d\n", arr1[0]);
    func1(arr1);
    printf("\n");
    printf("The value at index 0 is %d\n", arr1[0]);
    printf("\n");
    func2(arr1);
    func2(arr1);
    printf("\n");
    func3(arr2);

    return 0;
}
