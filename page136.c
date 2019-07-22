//Example program #1 from Chapter 15

/*This program will ask users how many movies they've seen this year
and then loop through asking the name of each movie and a rating from 1 to 10.
It will note their favourite movie and their least favourite movie.*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    int ctr, numMovies, rating, favRating, leastRating;
    char movieName[40], favorite[40], least[40];
    
    //assign 0 to favRating so any movie with a rating of
    //1 or higher will replace it and the leastRating to 10
    //so any movie rated 9 or lower will replace it
    
    favRating = 0;
    leastRating = 10;
    
    //Find out how many movies the user has seen and can rate
    //The loop will continue until they enter a number more than 0
    
    do {
        printf("How many movies have you seen this year?\n");
        scanf(" %d", &numMovies);
        
        //If the user enters 0 or a negative number, the program will remind
        //them to enter a positive number and prompt them again
        
        if (numMovies < 1)
        {
            printf("No movies! How can you rank them?\nTry again!\n\n");
        }
    } while (numMovies < 1);
    
    for (ctr = 1; ctr <= numMovies; ctr++)
    {
        //Get the name of the movie and the user's rating
        
        printf("\nWhat was the name of the movie? ");
        printf("(1-word titles only!)\n");
        scanf(" %s", movieName);
        printf("On a scale of 1 to 10, what would ");
        printf("you rate it?\n");
        scanf(" %d", &rating);
        
        //check whether it is their best rated movie so far
        
        if (rating > favRating)
        {
            strcpy(favorite, movieName);
            favRating = rating;
        }
        
        //Check whether it's their worst-rated movie so far
        
        if (rating < leastRating)
        {
            strcpy(least, movieName);
            leastRating = rating;
        }
    }
    
    printf("\nYour Favorite Movie was %s.\n", favorite);
    printf("\nYour Least-favorite movie was %s.\n", least);
}