/*
 * Filename: problem_49.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 05/19/2019
 * Date last modified: 05/19/2019
 * 
 * Description:
 *     Problem #49: Write a program that implements the function pow(a,n),
 *     that is, calculates the value of expression a^n.
 */


#include <stdio.h>
#include <math.h>

int main() {
    double a, n;
    printf("Enter number >> ");
    scanf("%lf", &a);
    printf("Enter exponent >> ");
    scanf("%lf", &n);
    printf("Number %lf to the power of %lf is: %lf.\n", a, n, pow(a, n));
    return 0;
}
