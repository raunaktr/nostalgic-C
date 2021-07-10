#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
    return;
}

int main(int argc, char const *argv[])
{
    int a = 100, b = 23;
    printf("%d and %d\n", a, b);

    swap(&a, &b);
    printf("%d and %d\n", a, b);
    return 0;
}
