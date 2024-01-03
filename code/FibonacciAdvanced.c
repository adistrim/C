#include <stdio.h>

int fib_recursive(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fib_recursive(n - 1) + fib_recursive(n - 2);
    }
}

int fib_iterative(int n)
{
    int a = 0;
    int b = 1;

    for (int x = 0; x < n - 1; x++)
    {
        b = a + b;
        a = b - a;
    }
    return a;
}

int main()
{
    int num;
    printf("Enter the number of terms -> ");
    scanf("%d", &num);

    printf("\nThis output is working under iterative approach which is faster!\n\n");

    for (int i = 1; i < num + 1; i++)
    {
        printf("%d, ", fib_iterative(i));
    }

    printf("\n\nThis output is working under recursive approach which is slower!\n\n");

    for (int j = 1; j < num + 1; j++)
    {
        printf("%d, ", fib_recursive(j));
    }

    return 0;
}
