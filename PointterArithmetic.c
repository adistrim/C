#include <stdio.h>

int main()
{
    int a = 34;
    int* ptra = &a;
    printf("%d\n", a);
    printf("%p\n", ptra);          // %d will throw warning but only in %d we 
    printf("%p\n", ptra+1);        // can easily manupulate the pointer value

    return 0;
}
