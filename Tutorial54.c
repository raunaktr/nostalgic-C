#include <stdio.h>
#include <stdlib.h>

int *funcDanglingPtr()
{
    int a, b, sum;
    a = 34;
    b = 61;
    sum = a + b;
    return &sum;
}

int main(int argc, char const *argv[])
{
    // Deallocation of memory block
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 5;
    ptr[1] = 21;
    ptr[2] = 13;
    ptr[3] = 19;

    free(ptr); //ptr is now a dangling pointer

    // Using functions to create a dangling pointer
    int *dangPtr = funcDanglingPtr();

    // Using local scope to find a dangling pointer
    int *danglingPtr;
    int *funcDanglingPtr;
    {
        int a = 12;
        danglingPtr = &a;
    }

    return 0;
}
