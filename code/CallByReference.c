#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x; // saving the value of address x 
    *x = *y;       // put y into x
    *y = temp;     // put saved value in the y

    return;
}

int main()
{
    int a, b;
    printf("Enter two values to be swaped -> \n");
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("%d %d\n", a, b);

    return 0;
}
