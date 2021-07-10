#include<stdio.h>
int fib_recursive(int n)
{

    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fib_recursive(n - 1) + fib_recursive(n - 2);
    }
}

int fib_iterative(int n)
{
    int a = 0;
    int b = 1;

    for (int i = 0; i < n; i++)
    {
        b = a + b;
        a = b - a;
    }
    return a;
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number \n");
    scanf("%d", &n);
    printf("The value of fibonacii number at position number %d using iterative approach is %d\n", n, fib_iterative(n));
    printf("The value of fibonacii number at position number %d using recursive approach is %d\n", n, fib_recursive(n));
    return 0;
}
