#include <stdio.h>

int fib_recurive(int num)
{
    if (num == 1 || num == 0)
    {
        return num;
    }
    else
    {
        return (fib_recurive(num - 1) + fib_recurive(num - 2));
    }
}
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", fib_recurive(i));
    }
    return 0;
}
