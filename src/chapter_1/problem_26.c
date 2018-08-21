/*
 * Filename: problem_26.c
 * Project: C Language Workbook Problems
 * Section: Chapter 1
 * Author: Alexander Popp
 * Date created: 08/19/2018
 * Date last modified: 08/20/2018
 * 
 * Description:
 *     Problem #26: Write a program that calculates the sum of digits
 *     in inputed three-digit integer.

 */


#include <stdio.h>

int main() {
    int number, d1, d2, d3;
    printf("Enter a three-digit integer >> ");
    scanf("%d", &number);
    d1 = number / 100;
    d2 = (number / 10) % 10;
    d3 = number % 10;
    printf("Sum of digits %d, %d and %d is %d.\n", d1, d2, d3, d1 + d2 + d3);
	return 0;
}
