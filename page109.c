//Example program #2 from Chapter 12

/*This program asks for a last name, and if the submitted surname
begins with a letter between P and Q, they will be sent to a special
room for their tickets*/

#include <stdio.h>

int main(void)
{
    //set up an array for the last name and then get it from the user
    
    char name[25];
    printf("What is your last name?\n");
    printf("Please capitalise the first letter!\n");
    scanf(" %s", name);
    //For a string array, you don't need the &
    
    if ((name[0] >= 'P') && (name[0] <= 'S'))
    {
        printf("You must go to room 2432 ");
        printf("for your tickets.\n");
    }
    else
    {
        printf("You can get your tickets here.\n");
    }
}