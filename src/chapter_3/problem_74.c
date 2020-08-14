/*
 * Filename: problem_74.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 15/08/2020
 * Date last modified: 15/08/2020
 * 
 * Description:
 *     Problem #74: Write a program that calculates harmonic mean of numbers from 1 to N.
 *     Note: Harmonic mean of numbers a1, a2, ..., an, is h=n/(1/a1 + 1/a2 + ... + 1/an)
 *          
 */


#include <stdio.h>

int main() {
    int n, a;
    float divisor = 0.0;
    printf("Enter n >> ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        printf("Enter number a[%d]: ", i);
        scanf("%d", &a);
        divisor += ((float)1 / (float)a);
    }
    printf("Harmonic mean for the given numbers is: %.2f.\n", ((float)n / divisor));
    return 0;
}
