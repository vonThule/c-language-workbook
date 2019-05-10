/*
 * Filename: problem_47.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 05/10/2019
 * Date last modified: 05/10/2019
 * 
 * Description:
 *     Problem #47: Print out a number resulting from putting together of
 *     four bits of highest value of the first number and four bits of lowest
 *     value of the second number. Numbers are the size of 8 bits.
 */


#include <stdio.h>

int main() {
    int num1, num2;
    int m1 = 15 << 4, m2 = 15;
    printf("Enter first number >> ");
    scanf("%d", &num1);
    printf("Enter second number >> ");
    scanf("%d", &num2);
    printf("Resulting number: %d.\n", (num1 & m1) | (num2 & m2));    
    return 0;
}
