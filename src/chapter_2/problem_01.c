/*
 * Filename: problem_01.c
 * Project: C Language Workbook Problems
 * Section: Chapter 2
 * Author: Alexander Popp
 * Date created: 08/24/2018
 * Date last modified: 08/24/2018
 * 
 * Description:
 *     Problem #01: Given three integers as input, print out 
 *     the largest.
 */


#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter the first integer >> ");
    scanf("%d", &a);
    printf("Enter the second integer >> ");
    scanf("%d", &b);
    printf("Enter the third integer >> ");
    scanf("%d", &c);
    if (a > b && a > c) printf("%d is the largest number.\n", a);
    if (b > a && b > c) printf("%d is the largest number.\n", b);
    if (c > a && c > b) printf("%d is the largest number.\n", c);
	return 0;
}
