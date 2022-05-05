
// Example program #3 from Chapter 11 of Absolute Beginner's Guide  to C, 3rd Edition
// File Chapter11ex3.c
/* This program asks the user their state of happiness on a scale of 1 to 10
** and then gives a custom 2-line message based on their range, either 1-2, 3-4, 5-7, or 8-10.
** @happy_meter - stores the scale of happiness from user
*/
#include <stdio.h>

main()
{
    //Declare variables
    int happy_meter;
    //Collect user input
    printf("How happy are you on a scale of 1-10 ? (enter number only)\n");
    scanf(" %d" , &happy_meter);
    //Evaluate user input
    if (happy_meter <= 2)
        {
            printf("We are sorry you are not happy at the moment.\nHow can we help make it better?");
        }
    else if (happy_meter <= 4)
    {
        printf("We understand things are not all that good at the moment.\nDo let us know if there is anyway we can help.");


    }
    else if (happy_meter <= 7)
    {
        printf("You are doing fine\n");
        printf("Please let us know how we can make you happier.");
    }
    else
    {
        printf("You really are a happy person!\n");
        printf("We are glad we made you happy.");
    }
    //Return
    return 0;
}
