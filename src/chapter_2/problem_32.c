/*
 * Filename: problem_32.c
 * Project: C Language Workbook Problems
 * Section: Chapter 2
 * Author: Alexander Popp
 * Date created: 08/24/2018
 * Date last modified: 08/25/2018
 * 
 * Description:
 *     Problem #32: Write a program that, for a given x calculates y
 *     according to formula:
 *         - if x <= 2,    then y = cos(x + 2.3),
 *         - if 2 < x < 5, then y = sqrt(sqrt(x)),
 *         - if x >= 5,    then y = x^4
 */


#include <stdio.h>
#include <math.h>

int main() {
    float x, y;
    printf("Enter x >> ");
    scanf("%f", &x);
    if (x <= 2) printf("y = %f\n", cos(x + 2.3));
    else if (x > 2 && x < 5) printf("y = %f\n", sqrt(sqrt(x)));
    else printf("y = %f\n", pow(x, 4));
	return 0;
}
