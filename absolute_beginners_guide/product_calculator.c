// Example program #2 from Chapter 14 of Absolute Beginner's Guide  to C, 3rd Edition
// File Chapter14ex2.c
/* This program will multiply two numbers and display the result for as long as the user wants.
** Answering 'N' will break the loop.
*/

#include <stdio.h>

main()
{
    //Declare variables
    float num1, num2, prdct;
    char reply;
    //Collect user data
    printf("Would you like to see the product of two numbers? Enter Y for yes and N for no\n");
    scanf(" %c", &reply);
    while ((reply != 'N' || reply != 'n') && (reply == 'Y' || reply == 'y'))
        {
            do {
                printf("Enter first number\n");
                scanf(" %f", &num1);
                printf("Enter second number\n");
                scanf(" %f", &num2);
        //Evaluate
                prdct = num1 * num2;
                printf("The product of your chosen numbers is %f\n", prdct);
                printf("Want to try again? (Enter Y for yes and N for no\n");
                scanf(" %c", &reply);
                }
            while ((reply != 'N' || reply != 'n') && (reply == 'Y' || reply == 'y'));
        }
    //Conclude
    return 0;
}
