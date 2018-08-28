/*
 * Filename: problem_12.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 08/28/2018
 * Date last modified: 08/28/2018
 * 
 * Description:
 *     Problem #12: User enters numbers different than 0 (0 marks
 *     the end of input). Write a program that determines the smallest
 *     of the given numbers.
 */


#include <stdio.h>

int main() {
    int n, min = 0;
    while(1) {
        printf("Enter a number (0 to end) >> ");
        scanf("%d", &n);
        if (n == 0) break;
        else if (min == 0 || n < min) min = n;
    }
    printf("The smallest number is: %d\n", min);
    return 0;
}
