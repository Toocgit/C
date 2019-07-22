// Example program 1 from chapter 31

/* This program demonstrates passing a variable to a function by value */

#include <stdio.h>

int half(int i);

int main(void)
{
    int i;
    
    printf("Please enter an integer: ");
    scanf(" %d", &i);
    
    // Now call the half function, passing the value of i
    
    half(i);
    
    // To prove that the half function has not changed the value of i
    
    printf("In main(), i is still %d.\n", i);
    
    return 0;
}

/* ***************************************************************** */

// It can be helpful to use dividers to break up your functions

int half(int i)
{
    i = i / 2;
    printf("Your integer halved is %d.\n", i);
    return 0; // Returns to main
}