/*
 * Filename: problem_18.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 08/29/2018
 * Date last modified: 08/29/2018
 * 
 * Description:
 *     Problem #18: Determine the mod of division of A with B (A,B >= 0)
 *     without using '/' and '%' operators.
 */


#include <stdio.h>

int main() {
    int a, b, remainder;
    printf("Enter two numbers >> ");
    scanf("%d%d", &a, &b);
    remainder = a;
    while(remainder >= b) remainder -= b;
    printf("Remainder while dividing %d with %d is: %d\n", a, b, remainder);
    return 0;
}
