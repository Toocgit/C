// Example program 2 from chapter 31

/* The program demonstrates passing an array to a function */

#include <stdio.h>
#include <string.h>

int change (char name[15]);

int main(void)
{
    char name[15] = "Michael Hatton";
    change(name);
    printf("In main(), the name is now %s.\n", name);
    return 0;
}

/* ****************************************************************** */

int change (char name[15])
{
    // Change the string stored at the address pointed to by name
    
    strcpy(name, "xxxxxxxxxxxxxxx");
    return 0;
}