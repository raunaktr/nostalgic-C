#include <stdio.h>
#include <stdlib.h>

int fun1(int b)
{
    printf("The address of b is %d\n", &b);
    return b * 10;
}
int main()
{
    int b = 32;
    printf("The address of b is %d\n", &b);

    int val = fun1(b);
    int *ptr = &val;
    printf("%d\n", val);
    return 0;
}
