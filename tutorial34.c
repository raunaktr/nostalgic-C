#include <stdio.h>

void printStr(char str[])
{

    int i;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
    return;
}

int main()
{
    // char str[] = {'r', 'a', 'u', 'n', 'a', 'k', '\0'};
    // char str[] = "raunak";
    char str[34];
    gets(str);
    printf("using custom function:\n");
    printStr(str);
    printf("using printf %s\n", str);
    printf("using puts:\n");
    puts(str);
    return 0;
}
