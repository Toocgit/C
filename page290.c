// Example program 1 from chapter 30

/* This program is a demonstration of the difference between global
variables and local variables */

#include <stdio.h>
int g1 = 10;

int prAgain(void);

int main(void)
{
    float l1;
    l1 = 9.0;
    
    // prints the 1st global variable and the 1st local variable
    printf("%d %.2f\n", g1, l1);
    
    prAgain(); // calls our first function
    return 0;
}

float g2 = 19.0;

int prAgain()
{
    int l2 = 5;
    
    // cannot print l1 as it is local to main
    printf("%d %.2f %d\n", l2, g2, g1);
    return 0;
}