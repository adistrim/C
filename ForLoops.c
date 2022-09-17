#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number -> ");
    scanf("%d", &num);
    for (int i = 0; i < 11; i++)
    {
        printf("%d X %d = %d\n", num, i, i * num);
    }

    return 0;
}
