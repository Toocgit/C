//Example program #2 from Chapter 16

/*This program loops through 10 numbers and prints a message that varies depending on
whether the program is odd or even. It tests for odd and if the number is odd, it
prints the odd message and starts the next iteration of the loop using the continue
statement. Otherwise, it prints the even message.*/

#include <stdio.h>

int main(void)
{
    int i;
    
    //Loops through the numbers 1 through 10
    
    for (i = 1; i <= 10; i++)
    {
        if ((i%2) == 1)
        {
            printf("I'm rather odd...\n");
            continue;
        }
        printf("Even up!\n");
    }
}