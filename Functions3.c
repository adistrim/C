#include <stdio.h>

int takenumber()
{
    int i;
    printf("Enter a number -> ");
    scanf("%d", &i);
    return i;
}

int main()
{
    int c = takenumber();
    printf("Given input was -> %d\n", c);
    return 0;
}
