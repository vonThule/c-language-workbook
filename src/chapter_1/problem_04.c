/*
 * Filename: problem_04.c
 * Project: C Language Workbook Problems
 * Section: Chapter 1
 * Author: Alexander Popp
 * Date created: 08/19/2018
 * Date last modified: 08/19/2018
 * 
 * Description:
 *     Problem #04: Write a program that takes in two integers and
 *     prints their sum, difference, product, quotient and square root
 *     to the standard output.
 */


#include <stdio.h>
#include <math.h>

int main() {
    int int1, int2;
    printf("Enter first integer >> ");
    scanf("%d", &int1);
    printf("Enter second integer >> ");
    scanf("%d", &int2);
    printf("Sum of %d and %d is %d.\n", int1, int2, int1 + int2);
    printf("Difference between %d and %d id %d.\n", int1, int2, int1 - int2);
    printf("Product of %d and %d is %d.\n", int1, int2, int1 * int2);
    printf("Quotient of %d and %d is %f.\n", int1, int2, (double)int1 / int2);
    printf("Square root of %d is %f.\n", int1, sqrt(int1));
    printf("Square root of %d is %f.\n", int2, sqrt(int2));
    return 0;
}
