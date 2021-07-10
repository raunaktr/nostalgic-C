#include <stdio.h>
#include <stdlib.h>

struct travelAgency
{
    char name[30];
    char licenseNumber[20];
    char route[30];
    float distance;
};

int main()
{
    struct travelAgency driver[4];
    printf("~~~~~~~~~~~Welcome to admin dashboard!~~~~~~~~~~~\n\n");

    for (int i = 0; i < 3; i++)
    {
        printf("\n# Enter driver %d details\n", i + 1);
        printf("\tdriver's name\t");
        scanf("%s", &driver[i].name);
        printf("\tdriver's License Number\t");
        scanf("%s", &driver[i].licenseNumber);
        printf("\tdriver's route\t");
        scanf("%s", &driver[i].route);
        printf("\tdriver's distance travelled that \t");
        scanf("%f", &driver[i].distance);
    }

    printf("\n_____ Details of Driver's list______");
    for (int i = 0; i < 3; i++)
    {
        printf("\tDriver Number %d\n", i + 1);
        printf("\tName:\t");
        puts(driver[i].name);

        printf("\tLicense Number:\t");
        puts(driver[i].licenseNumber);

        printf("\tRoute:\t");
        puts(driver[i].route);

        printf("\tDistance travelled:\t%f", driver[i].distance);
        printf("\n");
    }

    return 0;
}
