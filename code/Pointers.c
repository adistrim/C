#include <stdio.h>

int main()
{
    printf("Let's throw some ligth on pointer!\n");

    int a = 10;
    int* pt = &a;

    printf("The value of a is -> %d\n", a);
    printf("The value of a is -> %d\n",*pt);
    printf("The address of a is -> %p\n", &a);
    printf("The address of a is -> %p\n", pt);
    printf("The address of pointer to a is -> %p\n", &pt);

    return 0;
}
  