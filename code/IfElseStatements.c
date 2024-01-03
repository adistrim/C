#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Ener your age -> ");
    int age;
    scanf("%d", &age);
    printf("You have entered your age %d\n", age);

    if (age >= 18)
    {
        printf("Congratulations! You can vote :)\n");
    }
    else if (age > 12)
    {
        printf("Unfortunately you can not vote :(\n");
    }
    else
    {
        printf("Go home kiddo!\n");
    }

    return 0;
}
