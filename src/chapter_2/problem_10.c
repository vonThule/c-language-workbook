/*
 * Filename: problem_10.c
 * Project: C Language Workbook Problems
 * Section: Chapter 2
 * Author: Alexander Popp
 * Date created: 08/24/2018
 * Date last modified: 08/24/2018
 * 
 * Description:
 *     Problem #10: Write a program that checks whether quadratic
 *     equation ax^2 + bx + c = 0 has:
 *         # real and different,
 *         # real and equal, or
 *         # conjugated complex
 *     solutions.
 * Note:
 *     Solutions to the quadratic equation depend od the value of
 *     it's discriminant: D = b^2 - 4ac. If:
 *         # D > 0, solutions are real and different,
 *         # D < 0, solutions are konjugated complex,
 *         # D = 0, solutions are real and equal.
 */


#include <stdio.h>

int main() {
    int a, b, c, D;
    printf("Enter three integers >> ");
    scanf("%d%d%d", &a, &b, &c);
    D = b * b - 4 * a * c;
    printf("Solutions to the equation %dx^2 + %dx + %d = 0 ", a, b, c);
    if (D > 0) printf("are real and different.\n");
    else if (D < 0) printf("are konjugated complex.\n");
    else printf("are real and equal.\n");
	return 0;
}
