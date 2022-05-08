// Example program #1 from Chapter 15 of Absolute Beginner's Guide // to C, 3rd Edition
// File Chapter15ex1.c
/* This program will ask users how many movies they've seen this year,
** and then loop through asking the name of each movie and a rating from 1 to 10.
** It will remember their favorite movie and their least favorite movie.
*/

#include <stdio.h>
#include <string.h>

main()
{
    //Variable declaration
    float movie_rating, fav_rating, worst_rating;
    char movie_name[40], fav_movie[40], worst_movie[40];
    int num_of_movies, i;
    fav_rating = 0;
    worst_rating = 10;
    //Collect  data
    do
        {
            printf("how many movies have you seen this year\n");
            scanf(" %d", &num_of_movies);
            if (num_of_movies < 1)
                {
                    printf("That is not enough to make comparisons.\n Do you want to try again?");
                }
        }
    while (num_of_movies < 1);
        for (i=1; i <= num_of_movies; i++)
        {
            printf("What is the title of movie %d?\n", i);
            scanf(" %s", movie_name);
            printf("On a scale of 1-10, how will you rate this movie");
            scanf(" %f", &movie_rating);
            if (movie_rating > fav_rating)
            {
                strcpy(fav_movie, movie_name);
                fav_rating = movie_rating;
            }
            if (movie_rating < worst_rating)
            {
                strcpy(worst_movie, movie_name);
                worst_rating = movie_rating;
            }
        }

    printf("You've seen %d movie(s) this year\n", num_of_movies);
    printf("%s was your favorite and you gave it a rating of %.1f\n", fav_movie, fav_rating);
    printf("%s was your worst movie and you gave it a rating of %.1f\n", worst_movie, worst_rating);

    return 0;
    }

