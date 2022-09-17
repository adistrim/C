#include <stdio.h>

int takenumber()
{
    int x;
    printf("Enter a number -> ");
    scanf("%d", &x);
    return x;
}

void checkprimenumber()
{
    int num = takenumber();
    int prime = 0;

    if (num == 0 || num == 1)
    {
        prime = 1;
    }

    for (int i = 2; i <= num / 2; ++i)
    {
        if (num % i == 0)
        {
            prime = 1;
            break;
        }
    }

    if (prime == 1)
    {
        printf("%d is not a prime number!\n", num);
    }
    else
    {
        printf("%d is a prime number!\n", num);
    }
}

int main()
{
    checkprimenumber();
    return 0;
}
