/*
 * Filename: problem_04.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 08/27/2018
 * Date last modified: 08/27/2018
 * 
 * Description:
 *     Problem #04: Write a program that calculates the n-th power of number 2 (2^n).
 */


#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double pow = 1;
    printf("Enter n >> ");
    scanf("%d", &n);
	for (int i = 1; i <= fabs(n); i++) pow *= 2;
    if (n < 0 ) pow = 1 / pow;
    printf("The the %d-th power of number 2 is %lf\n", n, pow);
    return 0;
}
