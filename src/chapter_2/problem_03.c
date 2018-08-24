/*
 * Filename: problem_03.c
 * Project: C Language Workbook Problems
 * Section: Chapter 2
 * Author: Alexander Popp
 * Date created: 08/24/2018
 * Date last modified: 08/24/2018
 * 
 * Description:
 *     Problem #03: Write a program that calculates the square
 *     root of a given number. If the number is less than 0, raise
 *     an error.
 */


#include <stdio.h>
#include <math.h>


int main() {
    float x;
    printf("Enter a number >> ");
    scanf("%f", &x);
    if (x < 0) {
        printf("Error! Number must not be less than 0.\n");
        return 1;
    }
    printf("Square root of %f, is %f.\n", x, sqrt(x));
	return 0;
}
