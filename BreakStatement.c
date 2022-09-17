#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter your age -> ");
        scanf("%d", &age);
        if (age >= 18)
        {
            printf("Bye!!!\n");
            break;
        }
        else
        {
            printf("Hello, Kiddo!!!\n");
        }
    }

    return 0;
}
