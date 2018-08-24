/*
 * Filename: problem_14.c
 * Project: C Language Workbook Problems
 * Section: Chapter 2
 * Author: Alexander Popp
 * Date created: 08/24/2018
 * Date last modified: 08/24/2018
 * 
 * Description:
 *     Problem #14: Given a three digit integer, check if it is an
 *     Armstrong number. Armstrong number is equal to the sum of cubes
 *     of it's digits.
 * Note: 
 *     Number 111 is not an Armstrong number because 1^3 + 1^3 + 1^3
 *     does not equal 111.
 *     Number 370 is an Armstrong number because 3^3 + 7^3 + 0^3 does
 *     equal to 370.
 */


#include <stdio.h>

int main() {
    int number;
    int d1, d2, d3;
    printf("Enter a three-digit integer >> ");
    scanf("%d", &number);
    d1 = number % 10;
    d2 = (number/ 10) % 10;
    d3 = number / 100;
    printf("Number %d ", number);
    if (number == (d1 * d1 * d1 + d2 * d2 * d2 + d3 * d3 * d3)) printf("is an Armstrong number.\n");
    else printf("is not an Armstrong number.\n");
	return 0;
}
