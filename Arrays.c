#include <stdio.h>

int main()
{
    int marks[4] = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++)
    {
        printf("%d element -> %d\n", i, marks[i]);
    }

    return 0;
}