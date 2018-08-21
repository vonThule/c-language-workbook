/*
 * Filename: problem_25.c
 * Project: C Language Workbook Problems
 * Section: Chapter 1
 * Author: Alexander Popp
 * Date created: 08/19/2018
 * Date last modified: 08/20/2018
 * 
 * Description:
 *     Problem #25: Write a program that takes a 5 digit integer and
 *     calculates the difference between the first and final digit.
 */


#include <stdio.h>

int main() {
    int number, d1, d5;
    printf("Enter a five-digit integer >> ");
    scanf("%d", &number);
    d1 = number / 10000;
    d5 = number % 10;
    printf("Differnece between numbers %d and %d is %d.\n", d1, d5, d1 - d5);
	return 0;
}
