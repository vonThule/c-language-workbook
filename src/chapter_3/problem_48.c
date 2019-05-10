/*
 * Filename: problem_48.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 05/10/2019
 * Date last modified: 05/10/2019
 * 
 * Description:
 *     Problem #48: Write a program that determines the number of 1's
 *     in a binary value of the natural number N.
 *     Do not use operations '/' and '%'.
 */


#include <stdio.h>

int main() {
    int number, x = 0;
    printf("Enter a number >> ");
    scanf("%d", &number);
    while(number) {
        x += number & 1;
        number = number >> 1;
    }
    printf("Number of 1's is: %d.\n", x);
    return 0;
}
