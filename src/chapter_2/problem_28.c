/*
 * Filename: problem_28.c
 * Project: C Language Workbook Problems
 * Section: Chapter 2
 * Author: Alexander Popp
 * Date created: 08/24/2018
 * Date last modified: 08/25/2018
 * 
 * Description:
 *     Problem #28: Write a program that checks if the line y = kx + n
 *     is a tangent of the ellipse x^2 / a^2 + y^2 / b^2 = 1.
 * Note: 
 *     Condition of the contact of line and ellipse is:
 *         a^2 * k^2 + b^2= n^2
 */


#include <stdio.h>

int main() {
    int a, b;
    int k, n;
    printf("Enter parameters a and b of the ellipse >> ");
    scanf("%d%d", &a, &b);
    printf("Enter parameters k and n of the line >> ");
    scanf("%d%d", &k, &n);
    printf("Ellipse: (x^2 / %d^2) + (y^2 / %d^2) = 1\n", a, b);
    printf("Line: y = %dx + %d\n", k, n);
    if((a * a) * (k * k) + (b * b) == (n * n)) printf("The line is a tangent of the ellipse.\n");
    else printf("The line is not a tangent of the ellipse.\n");
	return 0;
}
