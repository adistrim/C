#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int m;
        scanf("%d", &m);
        int array[m];

        scanf("%d", &array[m]);
        
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            count++;
        }

        for (int j = 0; j < m; j++)
        {
            printf("%d", array[j]);
        }
        

    }
    
    return 0;
}
