#include <stdio.h>

int main()
{
    int i = 0;
label:
    printf("We are inside label!\n");
    i = i + 1;
    while (i > 4)
    {
        goto end;
    }

    goto label;

end:
    printf("We are at the end!\n");

    return 0;
}
