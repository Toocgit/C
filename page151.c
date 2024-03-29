//Example program #1 from Chapter 17

/*This program presents a menu of choices, gets the user's choice and then uses
the switch statement to execute a line or two of code based on the choice made*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int choice;
    
    printf("What do you want to do?\n");
    printf("1. Add New Contact\n");
    printf("2. Edit Existing Contact\n");
    printf("3. Call Contact\n");
    printf("4. Text Contact\n");
    printf("5. Exit\n");
    
    do
    {
        printf("Enter your choice:\n");
        scanf(" %d", &choice);
        switch (choice)
        {
            case (1): 
            printf("\nTo add you will need the ");
            printf("contact's forename, surname and number\n");
            break;
            case (2):
            printf("\nGet ready to enter the name of ");
            printf("the contact you wish to change\n");
            break;
            case (3):
            printf("Which contact do you want to call?\n");
            break;
            case (4):
            printf("Which contact do you wish to text?\n");
            break;
            case (5):
            exit(1); //Exits the program early
            default:
            printf("\n%d is not a valid choice.\n", choice);
            printf("Try again.\n");
            break;
        }
    } while ((choice < 1) || (choice > 5));
}