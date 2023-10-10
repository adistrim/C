#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char condi[20];
    printf("If you have passed maths enter math\nIf you have passed science enter science\nIf you have passed both enter both\n");
    printf("\nGive you input here -> ");

    scanf("%[^\n]%*c", condi);

    if (strcmp(condi, "math") == 0 || strcmp(condi, "maths") == 0)
    {
        printf("Congratulations! You have won $15\n");
    }
    else if (strcmp(condi, "science") == 0)
    {
        printf("Congratulations! You have won $20\n");
    }
    else if (strcmp(condi, "both") == 0)
    {
        printf("Mega Congratulations! You have won $50\n");
    }
    else
    {
        printf("Unfortunately you didn't won anything :(\n");
    }

    return 0;
}
