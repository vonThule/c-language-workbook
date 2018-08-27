/*
 * Filename: problem_06.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 08/27/2018
 * Date last modified: 08/27/2018
 * 
 * Description:
 *     Problem #06: Write a program that calculates the sum of first
 *     n members of the order 1 + 1/2 + 1/3 + 1/4 + ...
 */


#include <stdio.h>

int main() {
    int n;
    double sum = 0;
    printf("Enter n >> ");
    scanf("%d", &n);
	for (int i = 1; i <= n; i++) sum += 1.0/i;
    printf("The sum is %lf\n", sum);
    return 0;
}
