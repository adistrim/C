#include <stdio.h>

void printstar(n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c\n", '*');    // characters are put inside single ''
    }
}

int main()
{
    printstar(7);
    return 0;
}
