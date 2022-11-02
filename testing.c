#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"

bool notpossiblepath(char** matrix, int n){
  for(int i = n-1;i>=0;i--)
  {
    if(matrix[n-1][i]=='#')
    {
        int k = i;
        int j = n-1;
        while( k<n && matrix[j][k]=='#' )
        {
            j--;k++;
        }
        if(k==n)
        {
            return true;
        }
  }
  return false;
}
int reach_mess(int n, char** matrix)
{
    if(notpossiblepath(matrix,n))return -1;
    return (n-1)*2;
}
int main(void) 
{
    int n;
    scanf("%d", &n);

    char *matrix = malloc(n*sizeof(char));

    for(int i=0; i<1000; i++)
    {
        matrix[i] = malloc(n*sizeof(char));
    }

    for(int i=0; i<n; i++)
    {
        scanf("%s", matrix[i]);  
    }

    printf("%d", reach_mess(n,matrix));
  
    return 0;
}