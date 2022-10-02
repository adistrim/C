#include <stdio.h>

int main()
{
    int choice;
    int n;
    printf("Input '0' for triangular and '1' for reversed triangular -> ");
    scanf("%d", &choice);

    if (choice == 0)
    {
        printf("Enter nuber of rows -> ");
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i+1; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }

    else if (choice == 1)
    {
        printf("Enter nuber of rows -> ");
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }

    else
    {
        printf("Input out of bound!\n");
    }
    
    return 0;
}
