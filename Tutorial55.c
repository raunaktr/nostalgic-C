#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a = 334;
    int *ptr;  //This is a wild pointer
    *ptr = 34; // this is not a good way to proceed
    ptr = &a;  // ptr is no longer a wild pointer
    printf("%d\n", ptr);
    return 0;
}
