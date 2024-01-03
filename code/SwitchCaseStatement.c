#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Enter your age -> ");
    scanf("%d", &age);

    switch (age)
    {
    case 18:
        printf("Your're 18 years old :)\n");
        break;
    case 19:
        printf("Your're 19 years old :)\n");
        break;
    case 20:
        printf("Your're 20 years old :)\n");
        break;
    case 21:
        printf("Your're 21 years old :)\n");
        break;
    default:
        printf("Age if not 18, 19, 20 & 21\n");
        break;
    }
    return 0;
}
