/*
 * Filename: problem_30.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 04/15/2019
 * Date last modified: 04/15/2019
 * 
 * Description:
 *     Problem #30: Calculate the square root of the given number n,
 *     using Newtons iterative formula.
 *     Note: x0 = n, xi+1 = (xi + n/xi) / 2, i = 0,1,
 *     ending with the first member that satisfies |xn - xn-1| < epsilon.
 *     Number epsilon is given.
 */


#include <stdio.h>
#include <math.h>

int main() {
    double n, epsilon, value_prev, value_next;
    printf("Enter number n >> ");
    scanf("%lf", &n);
    printf("Enter the value of epsilon >> ");
    scanf("%lf", &epsilon);
    value_next = n;
    do {
        value_prev = value_next;
        value_next = (value_next + n / value_next) / 2;
        printf("%f\n", value_next);
    } while (fabs(value_next - value_prev) >= epsilon);
    printf("Square root of %f is %f\n", n, value_next);
    return 0;
}
