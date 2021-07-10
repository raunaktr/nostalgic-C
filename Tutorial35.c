#include <stdio.h>
#include <string.h>

int main()
{
    // char str1[] = "raunak";
    // char str2[] = "tripathi";
    // char s3;
    // // puts(strcat(str1, str2));
    // printf("the length of str1 is %d\n", strlen(str1));
    // printf("the length of str2 is %d\n", strlen(str2));
    // int a = strcat(str1, str2);
    // printf("%d\n", strcpy(s3, a));
    // printf("The strcmp for s1 and s2 is %d\n", strcmp(str1, str2));

    char s1[50], s2[50];
    char s3[] = " is a friend of ";
    printf("Enter strings s1:\n");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter another string:\n");
    fgets(s2, sizeof(s2), stdin);
    printf("%s knows %s\n", s1, s2);
    puts(strcat(s1, strcat(s3, s2)));

    return 0;
}
