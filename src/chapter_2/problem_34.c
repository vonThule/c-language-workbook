/*
 * Filename: problem_34.c
 * Project: C Language Workbook Problems
 * Section: Chapter 2
 * Author: Alexander Popp
 * Date created: 08/24/2018
 * Date last modified: 08/25/2018
 * 
 * Description:
 *     Problem #34: Write a program that, for a given x and y,
 *     calculates z according to formula:
 *         - if x < 0 and y > 0,            then z = |x + y|,
 *         - if 0 <= x < 1 and -1 < y <= 0, then z = max(x, y),
 *         - if x >= 1 and y <= -1,         then z = x^y
 */


#include <stdio.h>
#include <math.h>

int main() {
    float x, y;
    printf("Enter numbers x and y >> ");
    scanf("%f%f", &x, &y);
    if (x < 0 && y > 0) printf("z = %f\n", fabs(x + y));
    else if (x >= 0 && x < 1 && y > -1 && y <= 0) printf("z = %f\n", (x > y) ? x : y);
    else if (x >= 1 && y <= -1) printf("z = %f\n", pow(x, y));
    else printf("This condition is not defined.\n");
	return 0;
}
