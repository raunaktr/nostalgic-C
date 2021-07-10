#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};
int main(int argc, char const *argv[])
{
    char name;
    struct Student raunak, rogue, harold;
    raunak.id = 1;
    rogue.id = 2;
    harold.id = 3;
    raunak.marks = 30;
    rogue.marks = 40;
    harold.marks = 89;
    raunak.fav_char = 'r';
    rogue.fav_char = 'r';
    harold.fav_char = 'r';

    strcpy(raunak.name, "Raunak Tripathi");
    strcpy(harold.name, "Harold Harold");

    printf("Raunak's full name is %s\n", raunak.name);
    printf("Raunak obtained %d marks\n", raunak.marks);
    printf("Harold's full name is %s\n", harold.name);
    printf("harold obtained %d marks\n", harold.marks);
    // printf("The Student name entered is %c,\n id of student is: %d,\nmarks obtained is %d,\n Favorite alphabat is %c\n", name, );

    return 0;
}
