#include <stdio.h>

int main()
{
    int a;
    int x = 0, y = 1;
    int nextnum = x + y;

    printf("Enter the number of terms -> ");
    scanf("%d", &a);

    printf("Fibonacci series upto %d -> %d, %d, ", a, x, y);

    for (int i = 3; i <= a; i++)
    {
        printf("%d, ", nextnum);
        x = y;
        y = nextnum;
        nextnum = x + y;
    }

    return 0;
}
