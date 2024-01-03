#include <stdio.h>

void change(int *a)
{
    *a = 345;

    return;
}
int main()
{
    int num = 45;
    printf("The value of the variable num is -> %d\n", num);
    change(&num);
    printf("The value of the variable num is -> %d\n", num);
    return 0;
}
