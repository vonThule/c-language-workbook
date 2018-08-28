/*
 * Filename: problem_14.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 08/28/2018
 * Date last modified: 08/28/2018
 * 
 * Description:
 *     Problem #14: Write a program that prints out the sum of digits
 *     of the given number.
 */


#include <stdio.h>

int main() {
    int number, n, digit;
    int sum = 0;
    printf("Enter number >> ");
    scanf("%d", &number);
    n = number;
    while(n) {
        digit = n % 10;
        sum += digit;
        n /= 10;
    }
    printf("Sum of digits of number %d is: %d\n", number, sum);
    return 0;
}
