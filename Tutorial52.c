#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 345;
    float b = 8.3;
    void *ptr;
    ptr = &a;
    printf("the value is %d\n", *((int *)ptr));
    ptr = &b;
    printf("The value is %f\n", *((float *)ptr));
    return 0;
}
