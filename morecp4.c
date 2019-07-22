#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char();
    switch (c)
    {
        case 'Y':
        case 'y':
            printf("yes\n");
            
        case 'N':
        case 'n':
            printf("no\n");
            
        default:
            printf("error\n");
    }
}