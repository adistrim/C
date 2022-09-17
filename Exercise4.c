#include <stdio.h>

int main()
{
    float poundsTokgs = 0.453592;
    float mileTokms = 1.60934;
    float inchesTometer = 0.0254;
    char choose;
    float input, answer;

    while (1)
    {
        printf("Choose the conversion:\n1. Pounds to kg\n2. Miles to km\n3. Inches to meter\n\nChoose -> ");
        scanf("%c", &choose);

        switch (choose)
        {
        case 'q':
            printf("Quitting the program!\n");
            goto end;

        case '1':
            printf("Give your input -> ");
            scanf("%f", &input);
            answer = input * poundsTokgs;
            printf("%f pounds is equal to %f kg\n", input, answer);
            goto end;
        
        case '2':
            printf("Give your input -> ");
            scanf("%f", &input);
            answer = input * mileTokms;
            printf("%f miles is equal to %f km\n", input, answer);
            goto end;

        case '3':
            printf("Give your input -> ");
            scanf("%f", &input);
            answer = input * inchesTometer;
            printf("%f inches is equal to %f meter\n", input, answer);
            goto end;

        default:
            break;
        }
    }
end:
    return 0;
}
