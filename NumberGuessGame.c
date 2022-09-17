#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])      // This program is not 100% correct more improvements are coming :)
{                                           // This is just to remind myself is that this program gives same random numbers every time i run this again and again
    int count = 5;
    int guess, rnum;
    printf("Hello! Here we are playing a number guessing game.\nYou'll have only 5 chances to guess a number between 0 and 9\n\nAll the best:)\n");
    for (int i = 0; i < 5; i++)
    {
        count = count - 1;
        printf("\nInput your guess -> ");
        scanf("%d", &guess);
        rnum = rand() % 10;
        if (guess == rnum)
        {
            printf("\nCongratulations! You guessed %d which is absolutely correct!\n", guess);
            break;
        }
        else
        {
            if (count == 1)
            {
                printf("\nYou guessed %d which is not correct\nActuall guess was %d\nNow you have left with %d chance!\n", guess, rnum, count);
            }
            else
            {
                printf("\nYou guessed %d which is not correct\nActuall guess was %d\nNow you have left with %d chances!\n", guess, rnum, count);
            }
        }
    }
    printf("\nYou lost!\n");

    return 0;
}
