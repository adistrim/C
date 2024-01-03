#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    for (int i = 0; i < 2; i++)     // Here's an example of nested for loop and goto end statement
    {                               // program will run 4 times and if zero is entered in between
        printf("%d", i);            // then program will stop running :)
        for (int j = 0; j < 2; j++)
        {
            printf("Enter zero (0) to exit.\n\nEnter a number -> ");
            scanf("%d", &num);
            if (num == 0)
            {
                goto end;
            }
        }
    }
end:
    printf("\nProgram is ended!\n\n");
    return 0;
}
