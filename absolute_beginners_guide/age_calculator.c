// Example program #1 from Chapter 11 of Absolute Beginner's Guide to C, 3rd Edition
// File Chapter11ex1.c
/* This program asks the user for their birth year
** and calculates how old they will be in the current year.
** (it also checks to make sure a future year has not been entered.)
** It then tells the user if they were born in a leap year.
*/

// Add preprocessing files
#include <stdio.h>
#define CURRENTYEAR 2022
// Call Main
main()
{
    // Declare variables
    int birth_year;
    int current_age;
    // Collect user data
    printf("Enter year of birth e.g 2002\n");
    scanf(" %d", &birth_year);
    // Evaluations
    if (birth_year < CURRENTYEAR)
    {
        current_age = CURRENTYEAR - birth_year;
        if (birth_year % 4 == 0)
    {
        printf("You are %d years old and you were born in a leap year", current_age);
    }
        else
        printf("You are %d years old and you were not born in a leap year",current_age);
    }
    else
    {
        printf("You were born in the future?");
    }
    return 0;
}
