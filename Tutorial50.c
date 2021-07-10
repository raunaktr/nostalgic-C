#include <stdio.h>
#include <stdlib.h>

int main()
{
    int chars, i = 0;
    char *ptr;

    while (i < 3)
    {
        printf("enter the number of characters in your employee Id\n");
        scanf("%d", &chars);
        ptr = (char *)malloc((chars + 1) * sizeof(char));
        printf("Enter your Employee Id\n");
        scanf("%s", ptr);
        printf("Your Employee Id is %s\n", ptr);
        free(ptr);
        i++;
    }

    return 0;
}
