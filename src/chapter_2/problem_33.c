/*
 * Filename: problem_33.c
 * Project: C Language Workbook Problems
 * Section: Chapter 2
 * Author: Alexander Popp
 * Date created: 08/24/2018
 * Date last modified: 08/25/2018
 * 
 * Description:
 *     Problem #33: Write a program that, for a given x calculates y
 *     according to formula:
 *         - if x < -5,      then y = |x + 2|,
 *         - if -5 <= x < 1, then y = x^x,
 *         - if 1 <= x < 5,  then y = 3x^2 - x,
 *         - if x >= 5,      then y = x
 */


#include <stdio.h>
#include <math.h>

int main() {
    float x;
    printf("Enter x >> ");
    scanf("%f", &x);
    if (x < -5) printf("y = %f\n", fabs(x + 2));
    else if (x >= -5 && x < 1) printf("y = %f\n", pow(x, x));
    else if (x >= 1 && x < 5) printf("y = %f\n", 3 * pow(x, 2) - x);
    else printf("y = %f\n", x);
	return 0;
}
