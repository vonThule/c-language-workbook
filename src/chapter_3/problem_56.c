/*
 * Filename: problem_56.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 05/29/2019
 * Date last modified: 05/29/2019
 * 
 * Description:
 *     Problem #56: Write a program that calculates the sum of the first N members
 *     of the order 1 + 1/3 + 1/5 + ... + 1/(2n-1).
 */


#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter n >> ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
        sum += 1.0 / (2 * i - 1);

    printf("Sum = %f.\n", sum);
    return 0;
}
