#include <stdio.h>
#include <string.h>

typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} std; 
int main(int argc, char const *argv[])
{
    std s1, s2;
    s1.id = 20;
    s2.id = 39;

    printf("Value of S1's ID is %d\n", s1.id);
    printf("Value of S2's ID is %d\n", s2.id);

    return 0;
}
