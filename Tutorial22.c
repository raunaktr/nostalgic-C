#include <stdio.h>

int main(int argc, char const *argv[])
{
    char n;
    float val;
    while (1)
    {
        printf("Unit Conversions\n 1. kms to miles\n 2. Inches to foot \n 3. cms to inches\n 4. Pound to kgs\n ");
        scanf(" %c", &n);
        switch (n)
        {
        case 'q':
            printf("Quit\n");
            goto end;
            break;
        case '1':
            printf("Enter kms value: \t");
            scanf("%f", &val);
            printf("The value of %f kms in miles is %f\n", val, val * 1.6);
            break;
        case '2':
            printf("Enter inches value: \t");
            scanf("%f", &val);
            printf("The value of %f inches in foot is %f\n", val, val / 12);
            break;
        case '3':
            printf("Enter cms value: \t");
            scanf("%f", &val);
            printf("The value of %f cms in inches is %f\n", val, val / 2.54);
            break;
        case '4':
            printf("Enter lbs value: \t");
            scanf("%f", &val);
            printf("The value of %f lbs in kgs is %f\n", val, val / 2.205);
            break;
        default:
            break;
        }
    }
end:
    printf("Thankyou!\n");

    return 0;
}
