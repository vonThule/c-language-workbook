/*
 * Filename: problem_03.c
 * Project: C Language Workbook Problems
 * Section: Chapter 1
 * Author: Alexander Popp
 * Date created: 08/19/2018
 * Date last modified: 08/19/2018
 * 
 * Description:
 *     Problem #03: Write a program that asks the user to enter daily
 *     exchange rate for euros (EUR) and a value in euros that needs
 *     to be converted into dollars (USD). Program needs to print the
 *     converted value to standard output in a field of width 5.
 */


#include <stdio.h>

int main() {
    float rate, value;
    printf("Enter the daily exchange rate for EUR in USD >> ");
	scanf("%f", &rate);
	printf("Enter the value in EUR you wish to exchange for USD >> ");
    scanf("%f", &value);
	printf("%5.2f EUR converts into %5.2F USD.\n", value, value*rate);
	return 0;
}
