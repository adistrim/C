#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[100000];
    char t[100000];
    char u[100000];
    scanf("%s", s);
    int l = strlen(s);
    int j = 0, k = 0;

    for (int i = 0; i < l; i++)
    {
        if (i % 2 == 0)
        {
            int flag = t[j];
            t[j] = s[i];
            s[i] = flag;
            j++;
        }
        else
        {
            int unknown = u[k];
            u[k] = s[i];
            s[i] = unknown;
            k++;
        }
    }
    printf("%s", u);
    return 0;
}
