/*
 * Filename: problem_21.c
 * Project: C Language Workbook Problems
 * Section: Chapter 2
 * Author: Alexander Popp
 * Date created: 08/24/2018
 * Date last modified: 08/25/2018
 * 
 * Description:
 *     Problem #21: Write a program that calculates the sum of given
 *     numbers a, b and c, if the largest number is even, and difference
 *     if the largest number is odd.
 */


#include <stdio.h>

int main() {
    int a, b, c;
    int largest;
    printf("Enter three integers >> ");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c) largest = a;
    else if (b > a && b > c) largest = b;
    else largest = c;
    if (largest % 2 == 0) printf("The sum of numbers %d, %d and %d is: %d\n", a, b, c, a + b + c);
    else printf("The difference of numbers %d, %d and %d is: %d\n", a, b, c, a - b -c);
	return 0;
}
