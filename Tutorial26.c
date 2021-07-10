#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Let's run a pointers\n");
    int a = 76;
    int *ptra = &a;
    int *ptra2 = NULL;    
    printf("The address of pointer to a is %p\n", ptra);
    printf("The value of a is %p\n", *ptra);
    printf("The value of garbage is %p\n", ptra2);

    return 0;
}
