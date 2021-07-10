#include <stdio.h>
#include <stdlib.h>

int myfunc(int a, int b)
{
    // auto int myVar;
    static int myVar;
    myVar++;
    printf("myVar is %d\n", myVar);
    // myvar = a + b;
    return myVar;
}

int main()
{
    // Declaration -> telling the compiler about the existense of a variable (No space reserved)
    // Definition -> declaration + reserving space
    register int myVar = myfunc(3, 5);
    myfunc(3, 5);
    myfunc(3, 5);
    myfunc(3, 5);
    myfunc(3, 5);

    return 0;
}
