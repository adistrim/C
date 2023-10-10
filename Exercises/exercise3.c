#include <stdio.h>

int main()
{
    int num;
    int i = 0;
    printf("Enter a number -> ");
    scanf("%d", &num);
    do
    {
        i = i + 1;
        printf("%d X %d = %d\n", num, i, num * i);
    } while (i < 10);
    return 0;
}
