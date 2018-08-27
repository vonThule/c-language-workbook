/*
 * Filename: problem_03.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 08/27/2018
 * Date last modified: 08/27/2018
 * 
 * Description:
 *     Problem #03: Write a program that calculates the sum of odd,
 *     natural numbers, in the interval from 1 to n.
 */


#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    printf("Enter n >> ");
    scanf("%d", &n);
	for (int i = 1; i <= n; i += 2) sum += i;
    printf("The sum of natural, odd numbers from 1 to %d is %d\n", n, sum);
    return 0;
}
