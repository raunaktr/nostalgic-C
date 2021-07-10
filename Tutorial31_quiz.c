#include <stdio.h>

void addSub(int *x, int *y)
{
    int temp;

    temp = *x + *y;
    *x = *x - *y;
    *y = temp;
    return;
}

int main(int argc, char const *argv[])
{
    int a = 4, b = 3;
    printf("%d and %d\n", a, b);
    addSub(&a, &b);
    printf("%d and %d\n");
    return 0;
}
