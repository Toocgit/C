//Example program #1 from chapter 14

/*This program increases a counter from 1 to 5, printing updates and then
counts back down to 1. However, it uses while loops and the increment and decrement
operators*/

#include <stdio.h>

int main(void)
{
    int ctr = 0;
    
    while (ctr < 5)
    {
        printf("Counter is at %d.\n", ++ctr);
    }
    
    while (ctr > 1)
    {
        printf("Counter is at %d.\n", --ctr);
    }
}