//Example program #1 from chapter 13

/*This program asks for a number from 1 to 100 and tells them
whether or not their choice is divisible by 2 through 9*/

#include <stdio.h>

int main(void)
{
    int numPick;
    printf("Pick an integer between 1 and 100 ");
    printf("(the higher the better)\n");
    scanf(" %d", &numPick);
    
    printf("%d %s divisible by 2", numPick, (numPick % 2 == 0) ? ("is") : ("is not"));
    printf("\n%d %s divisible by 3", numPick, (numPick % 3 == 0) ? ("is") : ("is not"));
    printf("\n%d %s divisible by 4", numPick, (numPick % 4 == 0) ? ("is") : ("is not"));
    printf("\n%d %s divisible by 5", numPick, (numPick % 5 == 0) ? ("is") : ("is not"));
    printf("\n%d %s divisible by 6", numPick, (numPick % 6 == 0) ? ("is") : ("is not"));
    printf("\n%d %s divisible by 7", numPick, (numPick % 7 == 0) ? ("is") : ("is not"));
    printf("\n%d %s divisible by 8", numPick, (numPick % 8 == 0) ? ("is") : ("is not"));
    printf("\n%d %s divisible by 9\n", numPick, (numPick % 9 == 0) ? ("is") : ("is not"));
}