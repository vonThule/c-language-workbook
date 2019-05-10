/*
 * Filename: problem_46.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 05/10/2019
 * Date last modified: 05/10/2019
 * 
 * Description:
 *     Problem #46: Print out a number resulting from changing the n-th bit
 *     of a given number to 0.
 */


#include <stdio.h>

int main() {
    int number, nth, shift;
    printf("Enter a number >> ");
    scanf("%d", &number);
    printf("Enter the n-th bit >> ");
    scanf("%d", &nth);
    shift = 1 << nth;
    printf("Resulting number: %d.\n", number &~ shift);    
    return 0;
}
