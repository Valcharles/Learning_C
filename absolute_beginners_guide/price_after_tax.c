/* Example program #2 from Chapter 9 of Absolute Beginner's Guide to C, 3rd Edition
 * File Chapter9ex2.c
 * This program asks the user for a number of tires and price per tire. It then calculates a total price, adding sales tax.
 * #define SALESTAX is used to set SALESTAX so that it can be easy to change if sales tax changes.
 */

//Add preprocessing files

#include <stdio.h>
#define SALESTAX .07

main()

{
    //Declare variables

    int num_of_tires;
    float price_per_tire, pre_tax_price, final_price;

    //Collect relevant data from user

    printf("How many tires do you want to buy?\n");
    scanf(" %d", &num_of_tires);
    printf("How much does a tire cost?(Enter price in format $XX.XX)\n");
    scanf(" $%f", &price_per_tire);

    //Declare expressions for computing final price

    pre_tax_price = num_of_tires * price_per_tire;
    final_price = pre_tax_price + (pre_tax_price * SALESTAX);

    //print Results
    printf("The final cost for %d tires at a price of $%.1f per tire and salestax of %.2f is $%.2f.", num_of_tires, price_per_tire, SALESTAX, final_price);


    return (0);
}


