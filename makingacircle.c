#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// void DFS (int node, int **adj, int *vis)
// you may or maynot require this

// Challenge: can you do this in O(1) space and O(n) time?
// It is fairly possible :)

int main(int argc, char const *argv[])
{
    int n;
    char arr[3][50];
    char a;
    printf("Number of terms -> ");
    scanf("%d", &n);

    for (int i = 0; i < 2; i++)
    {
        printf("Give input -> ");
        scanf("%s", &a);
        strcpy(arr[i], &a);
    }

    // for (int j = 0; j <= n; j++)
    // {
    //     printf("%s, ", arr[j]);
    // }
    
    printf("strings are -> %s, %s", arr[0], arr[1]);


    return 0;
}
