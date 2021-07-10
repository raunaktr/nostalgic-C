#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a = 35;
    int *ptr = &a;

    if (ptr != NULL)
    {
        printf("The addresss of a is %d\n", ptr);
    }
    else
    {
        printf("Its a NULL pointer and it cannot be dereferenced!\n");
    }

    return 0;
}
