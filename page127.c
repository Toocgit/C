//Example program #2 from Chapter 14

/*This program will multiply two numbers and display the result for as long
as the user wants. Answering 'N' will break the loop*/

#include <stdio.h>

int main()
{
    float num1, num2, result;
    char choice;
    
    do
    {
        printf("\nEnter your first number to multiply: ");
        scanf(" %f", &num1);
        
        printf("\nEnter your second number to multiply: ");
        scanf(" %f", &num2);
        
        result = num1 * num2;
        printf("%.2f times %.2f equals %.2f\n", num1, num2, result);
        printf("Do you want to multiply another pair of numbers (Y/N): ");
        scanf(" %c", &choice);
        
        //If the user enters a lowercase n, this if statement will convert it to an N
        
        if (choice == 'n')
        {
            choice = 'N';
        }
    } while (choice != 'N');
}