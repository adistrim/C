#include <stdio.h>
#define PI 3.14 // We have defined a constant value of PI here

// Understanding the format specifier!!

int main(int argc, char const *argv[])
{

    int a = 45;
    float b = 23.45;
    printf("The value of a is %d and b is %f\n", a, b);

    // prints 28 characters upto 5 decimal spaces :)
    printf("%28.5f\n", b);

    const int c = 78; // reserved word cosnt makes the value of variable constant :0
    // c = 60;            // This line will throw an error because the value of C is const (CONSTANT)
    printf("%d\n", c);

    // PI = 7.33;            // This line will throw an error because we have already defined the value even before program starts
    printf("%f\n", PI);

    return 0;
}
