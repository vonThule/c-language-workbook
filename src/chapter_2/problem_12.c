/*
 * Filename: problem_12.c
 * Project: C Language Workbook Problems
 * Section: Chapter 2
 * Author: Alexander Popp
 * Date created: 08/24/2018
 * Date last modified: 08/24/2018
 * 
 * Description:
 *     Problem #12: Write a program that checks if line y = kx + n
 *     is a tangent of parabola y^2 = 2px.
 * Note: 
 *     Condition for the line y = kx + n to be a tangent of a parabola
 *     is 2kn = p.
 */


#include <stdio.h>

int main() {
    float k, n, p;
    printf("Enter 'k' and 'n' paramters of the line >> ");
    scanf("%f%f", &k, &n);
    printf("Enter the focal parameter 'p' >> ");
    scanf("%f", &p);
    printf("Line y = %fx + %f ", k, n);
    if (2 * k * n == p) printf("is a tangent ");
    else printf("is not a tangent ");
    printf("of the parabola y^2 = 2%fx.\n", p);
	return 0;
}
