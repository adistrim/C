#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);
    getchar();
    char array[testCase][128];
    for (int i = 0; i < testCase; i++)
    {
        int count = 0;
        int x = 0;

        gets(array[i]);

        for (int j = 0; j < strlen(array[i]); j++)
        {
            if (array[i][j] == '(')
            {
                count++;
            }
            else if (array[i][j] == ')')
            {
                count--;
            }     
            else if (array[i][j] == '[')
            {
                count--;
            }   
            else if (array[i][j] == ']')
            {
                count--;
            }
            else if (count < 0)
            {
                x = 1;
                break;
            }
        }
        if (x == 1 || count != 0)
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
    }
}
