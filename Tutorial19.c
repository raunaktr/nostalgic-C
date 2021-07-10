#include <stdio.h>

int sum(int a, int b);

void printStar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}

int main()
{
    int a, b, c;
    a = 13;
    b = 54;
    c = sum(a, b);
    printStar(7);
    printf("this sum is %d\n", c);
    return 0;
}
int sum(int a, int b)
{
    return a + b;
}
