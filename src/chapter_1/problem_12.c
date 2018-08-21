/*
 * Filename: problem_12.c
 * Project: C Language Workbook Problems
 * Section: Chapter 1
 * Author: Alexander Popp
 * Date created: 08/19/2018
 * Date last modified: 08/19/2018
 * 
 * Description:
 *     Problem #12: Write a program that asists the cashier in
 *     calculating the change to return, so that it asks for how much
 *     money the customer needs to pay and how much money the customer
 *     has given. The program should then output how many euros and
 *     how many cents the cashier should return to the customer.
 * Note:
 *     If the customer needs to pay 156.50 EUR, and they have given
 *     160.00 EUR, the program should output 3 euros and 50 cents.
 */


#include <stdio.h>

int main() {
    float price, payed, change;
    printf("How much does the customer need to pay? ");
    scanf("%f", &price);
    printf("How much did the customer pay? ");
    scanf("%f", &payed);
    change = payed - price;
    printf("The cashier shoud return %d euros and %d cents.\n", (int)change, (int)((change - (int)change) * 100));
	return 0;
}
