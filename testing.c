#include <time.h>
#include <stdlib.h>
#include <stdio.h>

// the random function
void RandomNumberGenerator(const int nMin, const int nMax, const int nNumOfNumsToGenerate)
{
    int nRandonNumber = 0;
    for (int i = 0; i < nNumOfNumsToGenerate; i++)
    {
        nRandonNumber = rand() % (nMax - nMin) + nMin;
        printf("%d ", nRandonNumber);
    }
    printf("\n");
}

int main()
{
    srand(time(NULL));
    RandomNumberGenerator(1, 70, 5);

    return 0;
}