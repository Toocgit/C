// Example program #2 from chapter 9

/* This program asks the user for a number of tires and price per
tire. It then calculates a total price, adding sales tax. */

// If you find you use a Sales tax rate that may change, use #define
// to set it in one place

#include <stdio.h>
#define SALESTAX .07

int main(void)
{
    // Variables for the number of tires purchased, price,
    // a pre-tax total and a post-tax total
    
    int numTires;
    float tirePrice, beforeTax, netSales;
    
    /* Get the number of tires purchased and price per tire. */
    printf("How many tires did you purchase? ");
    scanf(" %d", &numTires);
    printf("What was the cost per tire (enter in $xx.xx format)? ");
    scanf(" $%f", &tirePrice);
    
    /* Compute the price */
    
    beforeTax = tirePrice * numTires;
    netSales = beforeTax + (beforeTax * SALESTAX);
    
    printf("You spent $%.2f on your tires\n", netSales);
    
    return 0;
}