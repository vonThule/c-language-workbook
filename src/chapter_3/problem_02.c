/*
 * Filename: problem_02.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 08/27/2018
 * Date last modified: 08/27/2018
 * 
 * Description:
 *     Problem #02: Write a program that calculates the product of numbers from 1 to n.
 */


#include <stdio.h>

int main() {
    int n;
    int product = 1;
    printf("Enter n >> ");
    scanf("%d", &n);
	for (int i = 1; i <= n; i++) product *= i;
    printf("The product of numbers from 1 to %d is %d\n", n, product);
    return 0;
}
