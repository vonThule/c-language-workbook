/*
 * Filename: problem_05.c
 * Project: C Language Workbook Problems
 * Section: Chapter 1
 * Author: Alexander Popp
 * Date created: 08/19/2018
 * Date last modified: 08/19/2018
 * 
 * Description:
 *     Problem #05: Write a program that calculates arithmetic and
 *     geometric means of two numbers.
 */


#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2;
    printf("Enter first number >> ");
    scanf("%f", &num1);
    printf("Enter second number >> ");
    scanf("%f", &num2);
    printf("Arithmetic mean of numbers %f and %f is %f.\n", num1, num2, (num1 + num2) / 2);
    printf("Geometric mean of numbers %f and %f is %f.\n", num1, num2, sqrt(num1 * num2));
    return 0;
}
