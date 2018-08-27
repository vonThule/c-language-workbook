/*
 * Filename: problem_09.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 08/27/2018
 * Date last modified: 08/27/2018
 * 
 * Description:
 *     Problem #09: Write a program that prints out a table of values of
 *     the function sqrt(x) in the interval from M to N with a step of K.
 */


#include <stdio.h>
#include <math.h>

int main() {
    double m, n, i, k;
    printf("Enter the start and end of the interval (m,n) >> ");
    scanf("%lf%lf", &m, &n);
    printf("Enter step (k) >> ");
    scanf("%lf", &k);
	for (i = m; i <= n; i += k)
        printf("%.2lf %.2lf\n", i, sqrt(i));
    return 0;
}
