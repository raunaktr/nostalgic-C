#include <stdio.h>
#include <string.h>

union Student {
    int id;
    int marks;
    char fav_char;
    char name[34];
};
int main(int argc, char const *argv[])
{
    union Student s1;
    s1.fav_char = 'r';
    strcpy(s1.name, "raunak");
    s1.id = 1;
    s1.marks = 33;

    printf("The id is %d\n", s1.id);
    printf("The marks is %d\n", s1.marks);
    printf("The fav_char is %c\n", s1.fav_char);
    printf("The name is %s\n", s1.name);

    return 0;
}
