// #include <stdio.h>

// int main()
// {
//     int i, age;
//     for (i = 0; i < 10; i++)
//     {
//         printf("%d Enter your age:\t", i);
//         scanf("%d", &age);
//         // if (age > 10)
//         // {
//         //     break;
//         // }
//         if (age > 10)
//         {
//             continue;
//         }
//         printf("Hello world %d\n", i);
//         printf("2pac");
//     }
//     return 0;
// }

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int f, c;
    printf("Enter temperature in Celcius:\t");
    scanf("%d", &c);

    f = (c * 9 / 5) + 32;
    printf("Temperature in F is %d for %d C\n", f, c);

    return 0;
}
