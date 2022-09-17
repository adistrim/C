#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b, c;
    printf("First input -> ");
    scanf("%d", &a);
    printf("Second input -> ");
    scanf("%d", &b);
    c = sum(a, b);
    printf("Output -> %d\n", c);
    return 0;
}
