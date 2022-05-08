
// Example program #1 from Chapter 16 of Absolute Beginner's Guide // to C, 3rd Edition
// File Chapter16ex1.c
/* This program will ask users to input test grades for the 25 students in a class and then compute an average test grade.
** If fewer than 25 students took the test, the user can enter -1 as a grade and break the loop,
** and only those entered grades will be used to compute the average.
*/

#include <stdio.h>

main()
{
    int i;
    float score, avg_score;
    float total;
    total = 0;

    for (i = 1; i < 25; i++)
    {
        printf("Enter student score");
        scanf("%f", &score);
        if (score == -1.0)
        {break;
        }
        total =total + score;

    }

    avg_score = total / i;
    printf("The average score is %f",avg_score);
    return 0;
    }
