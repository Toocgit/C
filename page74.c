// Example program #1 from Chapter 9

/* This program demonstrates math operators and different kinds of division */

#include <stdio.h>

int main(void)
{
    // Two sets of equivalent variables
    // One set is floating point and the other set is integer
    
    float a = 19.0;
    float b = 5.0;
    float floatAnswer;
    
    int x = 19;
    int y = 5;
    int intAnswer;
    
    // Using two float variables creates an answer of 3.8
    floatAnswer = a / b;
    printf("%.1f divided by %.1f equals %.1f\n", a, b, floatAnswer);
    
    floatAnswer = x / y; // Take 2 creates an answer of 3.0
    printf("%d divided by %d equals %.1f\n", x, y, floatAnswer);
    
    // The following will also be 3 as it truncates and does not round up
    intAnswer = a / b;
    printf("%.1f divided by %.1f equals %d\n", a, b, intAnswer);
    
    intAnswer = x % y; // This calculates the remainder (4)
    printf("%d modulus (i.e. remainder of) %d equals %d\n", x, y, intAnswer);
    
    return 0;
}