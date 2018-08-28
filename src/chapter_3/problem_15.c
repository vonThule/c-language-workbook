/*
 * Filename: problem_15.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 08/28/2018
 * Date last modified: 08/28/2018
 * 
 * Description:
 *     Problem #15: Write a program that prints out the largest digit
 *     in a given number N.
 */


#include <stdio.h>

int main() {
    int number, n, digit;
    int max = 0;
    printf("Enter number >> ");
    scanf("%d", &number);
    n = number;
    while(n) {
        digit = n % 10;
        if (digit > max) max = digit;
        n /= 10;
    }
    printf("Largest digit in number %d is: %d\n", number, max);
    return 0;
}
