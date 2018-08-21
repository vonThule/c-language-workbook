/*
 * Filename: problem_14.c
 * Project: C Language Workbook Problems
 * Section: Chapter 1
 * Author: Alexander Popp
 * Date created: 08/19/2018
 * Date last modified: 08/19/2018
 * 
 * Description:
 *     Problem #14: Write a program that calculates the product
 *     of digits of a given four-digit integer.
 */


#include <stdio.h>

int main() {
    int number;
    int d1, d2, d3, d4;
    printf("Enter a 4-digit integer >> ");
    scanf("%d", &number);
    d1 = number / 1000;
    d2 = (number / 100) % 10;
    d3 = (number / 10) % 10;
    d4 = number % 10;
    printf("Product of digits in number %d is: %d.\n", number, d1 * d2 * d3 * d4);
	return 0;
}
