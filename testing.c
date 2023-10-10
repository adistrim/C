#include <stdio.h>

int main()
{
    int N, i, j, max, count;
    scanf("%d", &N);

    int a[N];
    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("%d", 0);
    for (i = 1; i < N; i++)
    {
        count = 0;
        max = a[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (a[j] < max)
            {
                count++;
            }
            else
            {
                break;
            }
        }
        printf(" %d", count);
    }
    return 0;
}
