/*
 * Filename: problem_23.c
 * Project: C Language Workbook Problems
 * Section: Chapter 2
 * Author: Alexander Popp
 * Date created: 08/24/2018
 * Date last modified: 08/25/2018
 * 
 * Description:
 *     Problem #23: Write a program that, for a given price of some
 *     product, calculates tax of 8%, if the price is less than
 *     10 EUR or 18% if not.
 */


#include <stdio.h>

int main() {
    float price, taxed;
    printf("Enter price of product >> ");
    scanf("%f", &price);
    if (price < 10.0) printf("The price of %f EUR after applying 8%% tax is: %f EUR.\n", price, price * 1.08);
    else printf("The price of %f EUR after applying 18%% tax is: %f EUR.\n", price, price * 1.18);    
	return 0;
}
