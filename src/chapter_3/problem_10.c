/*
 * Filename: problem_10.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 08/28/2018
 * Date last modified: 08/28/2018
 * 
 * Description:
 *     Problem #10: Write a program that prints out a table of values
 *     of the function X^3, while X changes from 2 to N with a step of 2.
 */


#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    printf("Enter n >> ");
    scanf("%d", &n);
	for (i = 2; i <= n; i += 2)
        printf("%7d %7.0f\n", i, pow(i, 3));
    return 0;
}
