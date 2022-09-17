#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int count = 5;
    int guess, num;
    printf("Warning! This is an infinte loop!\n");
    while (1)
    {
        printf("\nEnter a single digit number -> ");
        scanf("%d", &num);

        if (num == 5)
        {
            printf("found 5!");
            continue;
        }
        printf("You can see me means 5 is not given as an input!");
    }

    return 0;
}
