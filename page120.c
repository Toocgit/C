//Example program #2 from Chapter 13

/*This program increases a counter from 1 to 5, printing updates
and then counts it back down to 1*/

#include <stdio.h>

int main(void)
    {
        int ctr = 0;
        
        printf("Counter is at %d.\n", ++ctr);
        printf("Counter is at %d.\n", ++ctr);
        printf("Counter is at %d.\n", ++ctr);
        printf("Counter is at %d.\n", ++ctr);
        printf("Counter is at %d.\n", ++ctr);
        
        printf("Counter is at %d.\n", --ctr);
        printf("Counter is at %d.\n", --ctr);
        printf("Counter is at %d.\n", --ctr);
        printf("Counter is at %d.\n", --ctr);
        printf("Counter is at %d.\n", --ctr);

    }