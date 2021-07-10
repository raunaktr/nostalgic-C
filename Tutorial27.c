#include <stdio.h>

int main(int argc, char const *argv[])
{
    // char a = '3';
    // char *ptra = &a;
    // printf("%d\n", ptra);
    // ptra++;
    // printf("%d\n", ptra);
    // printf("%d\n", ptra - 2);
    int arr[] = {11, 2, 3, 4, 5, 6, 7, 23};
    int *arrptr = arr;
    printf("%d\n", &arr[2]);
    printf("%d\n", *(arr + 1));
    printf("%d\n", arrptr + 1);

    return 0;
}
