// Example program #2 from Chapter 12 of Absolute Beginner's Guide  to C, 3rd Edition
// File Chapter12ex2.c
/* This program asks for a last name, and if the user has a last name that starts with a letter between P and Q,
** they will be sent to a special room for their tickets.
*/
#include <stdio.h>

main()
{
    //Declare variables
    char lastName[50];
    //Collect last name
    printf("Enter your last name in capital letters.\n");
    scanf(" %s", &lastName);
    //Evaluate last name
    if (lastName[0] >= 'P' || lastName[0] <= 'Q'){
        printf("Please proceed to special room.");
    }
    else
    {
        printf("You have been assigned a regular room.");
    }
    // conclude
    return 0;
}
