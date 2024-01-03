#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    int i = 0;
    printf("This program prints whole numbers\n\nEnter a number -> ");
    scanf("%d", &num);

    while (i < num + 1)
    {
        printf("%d\n", i);
        i = i + 1;
    }

    return 0;
}
